# Concepts

## Analog to digital
* **Sampling Rate**: the number of samples taken from audio per second. Measured in hertz
  * Standard - 44100Hz (44.1kHz): for every second, sound gets sampled 44,100 times
  * Each sample has a value between 1 and -1 (Amplitude)
* **Bit Depth**: possible amplitudes for a single sample
  * If bit depth is 16: you have 2^16 of places a sample can be between 1 and -1 (65,536 places).
  * Greater bit depth => more detailed recording
* **Quantization**: for a single sample, what value (from bit depth) is it closest to => places sample in that value's place

## Concepts
* **Nyquist Theory**: The maximum representable frequency equals 1/2 of sampling rate
  * For rate of 44.1kHz => 22,050hz
  * Human hearing range: 20hz-20,000hz, thus the standard sampling rate contains our whole range of hearing.
* Aliasing:
