#include <vector>
#include "../../BufferObject.h"
using namespace std;

class compFrame1{
private:
    const float size = .75;
    const float x = .1;
    const float y = .5;
    const float z = .03;
    GLuint v_buf, i_buf, c_buf;
    vector<float> vertices, frame;
    vector<GLushort> indexes;
    float color1 = .3;
    float color2 = .3;
    float color3 = .3;
    vector<GLfloat> color;
    
public:
    ~compFrame1();
    void build();
    void render() const ;
};
