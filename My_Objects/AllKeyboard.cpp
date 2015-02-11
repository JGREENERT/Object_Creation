//
//  AllKeyboard.cpp
//  sample
//
//  Created by Gerad Wegener on 2/11/15.
//
//

#include "AllKeyboard.h"

using namespace std;

Keyboard kb1;
Keys kp1, kp2, kp3, kp4, kp5, kp6, kp7, kp8, kp9,
kp10, kp11, kp12, kp13, kp14, kp15, kp16, kp17, kp18,
kp19, kp20, kp21, kp22, kp23, kp24, kp25, kp26, kp27;
Keys ky1[3][10]= {{kp1, kp2, kp3, kp4, kp5, kp6, kp7, kp8, kp9},
    {kp10, kp11, kp12, kp13, kp14, kp15, kp16, kp17, kp18},
    {kp19, kp20, kp21, kp22, kp23, kp24, kp25, kp26, kp27}};

AllKeyboard::~AllKeyboard()
{
    kb1.~Keyboard();
    for (int i = 0; i < 3; i++) {
        for(int j = 0; j < 9; j++){
            ky1[i][j].~Keys();
        }
    }
}

void AllKeyboard::build()
{
    kb1.build();
    for (int i = 0; i < 3; i++) {
        for(int j = 0; j < 9; j++){
            ky1[i][j].build();
        }
    }
}

void AllKeyboard::render() const
{
        for (int i = 0; i < 3; i++) {
            for(int j = 0; j < 9; j++){
            glPushMatrix();
            glTranslatef(i*.15, .05, j*.15);
            ky1[i][j].render();
            glPopMatrix();
            }
        }
    
        glPushMatrix();
        glTranslatef(.165, 0, .59);
        glRotatef(90, 0, 1, 0);
        kb1.render();
        glPopMatrix();
}
