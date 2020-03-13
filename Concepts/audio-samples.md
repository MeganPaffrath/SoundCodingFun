# Audio Samples
[Back To Contents](../README.md)

## Nyquist & Aliasing
* **Nyquist Theory**: The maximum representable frequency equals 1/2 of sampling rate
  * For rate of 44.1kHz => 22,050hz
  * Human hearing range: 20hz-20,000hz, thus the standard sampling rate contains our whole range of hearing.
  * A **Nyquist frequency** or **Nyquist Rate** is the max frequency that can be recorded by a specific sampling rate
* **Aliasing**: frequencies above Nyquist frequency are mapped into frequencies less than the Nyquist frequency. Thus, an outlier frequency ends up coded as a frequency within the representable frequency range.

## Analog to digital
  * **Sampling Rate**: the number of samples taken from audio per second. Measured in hertz
    * Standard - 44100Hz (44.1kHz): for every second, sound gets sampled 44,100 times
    * Each sample has a value between 1 and -1 (Amplitude)
  * **Bit Depth**: possible amplitudes for a single sample
    * If bit depth is 16: you have 2^16 of places a sample can be between 1 and -1 (65,536 places).
    * Greater bit depth => more detailed recording
  * **Quantization**: for a single sample, what value (from bit depth) is it closest to => places sample in that value's place



  ## The Sine Wave
  > y(t) = A * sin(ωt + φ)
    * A = Amplitude
    * ω = angular frequency - oscillations / time interval
      * ω = 2π/T = 2πf
    * φ = radians per second
    * t = phase (in radians)

  * Any periodic waveform / sound can be broken down into an infinite summation of sine waves - proven by Jean Baptiste Fourier
    * Ex: there is a mathematical equation to produce a square wave from various sine waves

## On Sampling
* **sampling theorem**: A continuous analog signal can be sampled into discrete data points and reconstructed into the original signal without information loss.
  * ONLY IF: input signal has been band-limited (low-pass filtered) so that there are no frequencies higher than the Nyquist Frequency
    * Note: frequencies higher than Nyquist Frequency fold back into spectrum (aliasing). An aliased signal will remain as an unfixable error.
* **Anti-aliasing-filter**: the low pass filter that band-limits filter durring input
* Acquiring signals:
  * input goes through low pass filter (LPF) then through an analog to digital converter (ADC), then to the encoder where it becomes bitstream output
* Reconstructing acquired signals:
  * bitstream gets decoded and taken through DAC then a LPF

## Audio Data
* The number of quantization levels for coding is q = 2^N, where N = bit depth of the signal
  * Ex:
    * 8-bit system: can encode 2^8 (265) quantization levels
    * 16-bit: 65,536 lvls
* Audio may use either unsigned or signed data
  * unsigned (unipolar) ranges zero to MAX, or zero to MIN
    * 0 to 65,535 (16 bit audio)
    * no value encodes to 0
  * signed (bipolar) **(most common)**
    * ranges MIN to MAX (most common)
      * Ex: -32,768 to 32,767 (16 bit audio)
    * always more negative quantization lvls than + (so that zero can be encoded)
      * Because of how common phase inversion is in our algorithms, some systems limit most negative value to the second most negative value. (we may treat -32,768 as -32,767)
* Audio algorithms
  * common audio algorithms
    * addition
    * multiplication
  * issues:
    * integer numbers can produce errors out of our 16 bit integer bipolar range
      * fix: we work with numbers in the range of (+/-)1.0
      | Acquiring Correct Range   |
      | --- |
      | Fraction = Integer / 2^N |
      | Integer = Fraction * 2^N |
      *
