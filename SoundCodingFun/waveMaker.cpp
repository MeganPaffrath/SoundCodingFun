//
//  waveMaker.cpp
//  SoundCodingFun
//
//  Created by Megan Paffrath on 2/27/20.
//  Copyright © 2020 Megan Paffrath. All rights reserved.
//

#include "waveMaker.hpp"

vector<float> singleFrequencySineWave(double duration, double frequency, double amplitude) {
    int numFrames = SAMPLE_RATE*duration;
    vector<float> myWave(numFrames);
    
    for (int i = 0; i < numFrames; i++) {
        float x = 0;
        
        // Fundamental frequency
        x += amplitude * sin( 2*M_PI*i*frequency / SAMPLE_RATE);
        
        // Harmonics
            // append later to change timbre
        
        myWave[i] = x;
    }
    
    // create WAV file
    
    return myWave;
}


