//
//  notePlayer.hpp
//  SoundCodingFun
//
//  Created by Megan Paffrath on 2/27/20.
//  Copyright © 2020 Megan Paffrath. All rights reserved.
//

#ifndef notePlayer_hpp
#define notePlayer_hpp

#include <stdio.h>

// TO DO:
void playNote(int frequency, int duration);
void rest(int durration);

// use enum to name notes and their frequencies
void playSong(); // pick a song to play, use notes and rests to play it

#endif /* notePlayer_hpp */
