#include <vector>
#include "../../BufferObject.h"
using namespace std;

class ComputerBack{
private:
    const float size = 2;
    const float x = .1;
    const float y = .5;
    const float z = .1;
    GLuint v_buf, i_buf, c_buf;
    vector<float> vertices;
    vector<GLushort> indexes;
    float color1 = .3;
    float color2 = .3;
    float color3 = .3;
    vector<GLfloat> color;
    
public:
    ~ComputerBack();
    void build();
    void render() const ;
};