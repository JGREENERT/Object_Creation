#include <vector>
#include "../../BufferObject.h"
using namespace std;

class Keyboard{
private:
    const float size = 2;
    const float x = .75;
    const float y = .05;
    const float z = .25;
    GLuint v_buf, i_buf, c_buf;
    vector<float> vertices;
    vector<GLushort> indexes;
    float color1 = 0;
    float color2 = 0;
    float color3 = 0;
    vector<GLfloat> color;
    
public:
    ~Keyboard();
    void build();
    void render() const ;
};