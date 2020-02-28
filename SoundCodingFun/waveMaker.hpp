//
//  waveMaker.hpp
//  SoundCodingFun
//
//  Created by Megan Paffrath on 2/27/20.
//  Copyright © 2020 Megan Paffrath. All rights reserved.
//

#ifndef waveMaker_hpp
#define waveMaker_hpp

#include <stdio.h>
#include <vector>
#include "math.h"
using namespace std;

const float SAMPLE_RATE = 44100; //44,100 samples per second (standard)

vector<float> singleFrequencySineWave(double seconds, double frequency, double amplitude);

#endif /* waveMaker_hpp */
