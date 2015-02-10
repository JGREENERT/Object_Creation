#include "Table.h"
using namespace std;
//Table Top
Table_Top tt;
//Table Legs
Table_Leg tl1;
Table_Leg tl2;
Table_Leg tl3;
Table_Leg tl4;
Table_Leg tl5;
Table_Leg tl6;
Table_Leg tl7;
Table_Leg tl8;
//Table Crossbar
Table_Crossbar tc1;
Table_Crossbar tc2;
Table_Crossbar tc3;
Table_Crossbar tc4;
//Table Bottom Bar
Table_Bottom_Bar tbb1;
Table_Bottom_Bar tbb2;

table::~table()
{
    tt.~Table_Top();

    tl1.~Table_Leg();
    tl2.~Table_Leg();
    tl3.~Table_Leg();
    tl4.~Table_Leg();
    tl5.~Table_Leg();
    tl6.~Table_Leg();
    tl7.~Table_Leg();
    tl8.~Table_Leg();

    tc1.~Table_Crossbar();
    tc2.~Table_Crossbar();
    tc3.~Table_Crossbar();
    tc4.~Table_Crossbar();

    tbb1.~Table_Bottom_Bar();
    tbb2.~Table_Bottom_Bar();
}

void table::build()
{
    tt.build();

    tl1.build();
    tl2.build();
    tl3.build();
    tl4.build();
    tl5.build();
    tl6.build();
    tl7.build();
    tl8.build();

    tc1.build();
    tc2.build();
    tc3.build();
    tc4.build();

    tbb1.build();
    tbb2.build();
}

void table::render() const
{
    //Table Top
    glPushMatrix();
    tt.render();
    glPopMatrix();

    //Table Leg Pair 1
    glPushMatrix();
    glTranslated(1.75, -0.75, 1);
    tl1.render();
    glPopMatrix();

    glPushMatrix();
    glTranslated(1.75, -0.75, 0.65);
    tl5.render();
    glPopMatrix();

    //Table Leg Pair 2
    glPushMatrix();
    glTranslated(-1.75, -0.75, 1);
    tl2.render();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-1.75, -0.75, 0.65);
    tl6.render();
    glPopMatrix();

    //Table Leg Pair 3
    glPushMatrix();
    glTranslated(1.75, -0.75, -1);
    tl3.render();
    glPopMatrix();

    glPushMatrix();
    glTranslated(1.75, -0.75, -0.65);
    tl7.render();
    glPopMatrix();

    //Table Leg Pair 4
    glPushMatrix();
    glTranslated(-1.75, -0.75, -1);
    tl4.render();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-1.75, -0.75, -0.65);
    tl8.render();
    glPopMatrix();

    //Table Crossbar 1
    glPushMatrix();
    glTranslated(1.75, -0.75, 0.80);
    tc1.render();
    glPopMatrix();

    //Table Crossbar 2
    glPushMatrix();
    glTranslated(-1.75, -0.75, 0.80);
    tc2.render();
    glPopMatrix();

    //Table Crossbar 3
    glPushMatrix();
    glTranslated(1.75, -0.75, -0.80);
    tc2.render();
    glPopMatrix();

    //Table Crossbar 4
    glPushMatrix();
    glTranslated(-1.75, -0.75, -0.80);
    tc2.render();
    glPopMatrix();

    //Table Bottom Bar 1
    glPushMatrix();
    glTranslated(-1.75, -1.55, 0);
    tbb1.render();
    glPopMatrix();
    //Table Bottom Bar 2
    glPushMatrix();
    glTranslated(1.75, -1.55, 0);
    tbb2.render();
    glPopMatrix();
}