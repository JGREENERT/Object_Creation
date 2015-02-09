#include "Table.h"
using namespace std;

Table_Top tt;
Table_Leg tl1;
Table_Leg tl2;
Table_Leg tl3;
Table_Leg tl4;

table::~table()
{
    tt.~Table_Top();
    tl1.~Table_Leg();
    tl2.~Table_Leg();
    tl3.~Table_Leg();
    tl4.~Table_Leg();

}

void table::build()
{
    tt.build();
    tl1.build();
    tl2.build();
    tl3.build();
    tl4.build();
}

void table::render() const
{
    glPushMatrix();
    tt.render();
    glPopMatrix();

    glPushMatrix();
    glTranslated(1.75, -0.5, 1);
    tl1.render();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-1.75, -0.5, 1);
    tl2.render();
    glPopMatrix();

    glPushMatrix();
    glTranslated(1.75, -0.5, -1);
    tl3.render();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-1.75, -0.5, -1);
    tl4.render();
    glPopMatrix();
}