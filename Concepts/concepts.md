# Concepts

## Analog to digital
* **Sampling Rate**: the number of samples taken from audio per second. Measured in hertz
  * Standard - 44100Hz (44.1kHz): for every second, sound gets sampled 44,100 times
  * Each sample has a value between 1 and -1 (Amplitude)
* **Bit Depth**: possible amplitudes for a single sample
  * If bit depth is 16: you have 2^16 of places a sample can be between 1 and -1 (65,536 places).
  * Greater bit depth => more detailed recording
* **Quantization**: for a single sample, what value (from bit depth) is it closest to => places sample in that value's place

## Nyquist & Aliasing
* **Nyquist Theory**: The maximum representable frequency equals 1/2 of sampling rate
  * For rate of 44.1kHz => 22,050hz
  * Human hearing range: 20hz-20,000hz, thus the standard sampling rate contains our whole range of hearing.
  * A **Nyquist frequency** is the max frequency that can be recorded by a specific sampling rate
* **Aliasing**: frequencies above Nyquist frequency are mapped into frequencies less than the Nyquist frequency. Thus, an outlier frequency ends up coded as a frequency within the representable frequency range.

## The Sine Wave
> y(t) = A * sin(ωt + φ)
  * A = Amplitude
  * ω = angular frequency - oscillations / time interval
    * ω = 2π/T = 2πf
  * φ = radians per second
  * t = phase (in radians)

* Any periodic waveform / sound can be broken down into an infinite summation of sine waves - proven by Jean Baptiste Fourier
  * Ex: there is a mathematical equation to produce a square wave from various sine waves
