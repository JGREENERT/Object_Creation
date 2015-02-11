#ifndef CONE_DEMO_H
#define CONE_DEMO_H

#include <vector>
#include "../../BufferObject.h"

using namespace std;

class Computer_Connector{
private:
    const int N_POINTS = 13;
    const float TOP_RAD = .3f;
    const float BOT_RAD = 0.07f;
    const float CONE_HEIGHT = 0.17f;
    GLuint v_buf, i_buf, c_buf;
    vector<float> vertices;
    vector<GLushort> index;
    float color1 = .75;
    float color2 = .75;
    float color3 = .75;
    vector<GLfloat> color;
    
public:
    ~Computer_Connector();
    void build();
    void render() const;
};
#endif