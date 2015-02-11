#include <vector>
#include "../../BufferObject.h"
using namespace std;

class Computer{
private:
    const float size = 2;
    const float x = 1;
    const float y = .5;
    const float z = .1;
    GLuint v_buf, i_buf, c_buf;
    vector<float> vertices;
    vector<GLushort> indexes;
    float color1 = 0;
    float color2 = 0;
    float color3 = 0;
    vector<GLfloat> color;
    
public:
    ~Computer();
    void build();
    void render() const ;
};