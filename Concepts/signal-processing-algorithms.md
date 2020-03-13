# Signal Processing Algorithms
[Back To Contents](../README.md)

* Input: an audio sample
  * x(n)
* Output: output sample
  * difference equation: mathematical combination of inputs
  * y(n)
* Output must be ready before next input arrives
  * If process takes too long, there will be added noise
* For each sample period, relative sample positions are used based on the reference frame (reference frame based on n)

#### On Delay
* When a sample goes into memory, the previously stored sample is ejected (either deleted or used for processing)

#### Multiplication
* Scalar:
* sample-by-sample operator
* each input sample is multiplied by a coefficient
* used in almost every DSP algorithm
* Used for
  * gain: amplification of signal amplitude
    * coefficient > 1.0
  * attenuation: reduction of signal amplitude
    * coefficient has magnitude < 1.0
  * inversion
    * negative coefficient -> phase inversion

#### Addition and Subtraction
* The addition of either a positive or negative number

#### Non-linear
* Cause distortion

#### Block Diagrams
  * Delay: Denoted with a rectangle containing the delay operator (z^x)
  * Multiplication: denoted with triangles containing the coefficient
    * sometimes coefficient is placed outside of triangle
  * Addition and subtraction: denoted by a circle containing Σ
    * An "-" outside of the circle denotes subtraction

#### Outlying Signals
* Signals outside of (+/-)1.0 range
  * often are attenuated to be within range

#### Common Structures
* feed-forward (1st order)
  * input split into 2 paths
    * path 1 multiplies input by a coefficient
    * path 2 adds delay and then multiplies by a different coefficient
  * y(n) is the sum of the 2 paths
* feedback (1st order)
  * input is scaled by coefficient
  * this will be summed with the following:
    * output of previous scalling is delayed and multiplied by a negative coefficient
  * y(n) is the sum of the 2 paths
