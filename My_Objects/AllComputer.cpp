//
//  AllComputer.cpp
//  sample
//
//  Created by Gerad Wegener on 2/10/15.
//
//

#include "AllComputer.h"

using namespace std;

Computer three;
compFrame four;
compFrame1 five;
Screen six;
Computer_Connector sev;
ComputerBack eight;
ComputerStand nine;

AllComputer::~AllComputer()
{
    three.~Computer();
    four.~compFrame();
    five.~compFrame1();
    six.~Screen();
    sev.~Computer_Connector();
    eight.~ComputerBack();
    nine.~ComputerStand();
}

void AllComputer::build()
{
    three.build();
    four.build();
    five.build();
    six.build();
    sev.build();
    eight.build();
    nine.build();
}

void AllComputer::render() const
{
    glPushMatrix();
    glTranslatef(0, 1, 2);
    three.render();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0, 1.4, 2.1);
    four.render();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0, .42, 2.1);
    four.render();
    glPopMatrix();
    
    
    glPushMatrix();
    glTranslatef(-.9, 1, 2.115);
    five.render();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(.9, 1, 2.1);
    five.render();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0, .92, 2.1);
    six.render();
    glPopMatrix();
    
    
    glPushMatrix();
    glTranslatef(0, 1, 1.8);
    sev.render();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0, 1, 1.8);
    sev.render();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(.02, .6, 1.5);
    eight.render();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0.025, .05, 1.6);
    nine.render();
    glPopMatrix();
}
