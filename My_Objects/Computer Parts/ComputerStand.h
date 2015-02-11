#include <vector>
#include "../../BufferObject.h"
using namespace std;

class ComputerStand{
private:
    const float size = 2;
    const float x = .25;
    const float y = .05;
    const float z = .25;
    GLuint v_buf, i_buf, c_buf;
    vector<float> vertices;
    vector<GLushort> indexes;
    float color1 = .5;
    float color2 = .5;
    float color3 = .5;
    vector<GLfloat> color;
    
public:
    ~ComputerStand();
    void build();
    void render() const ;
};