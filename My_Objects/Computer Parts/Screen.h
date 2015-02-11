#include <vector>
#include "../../BufferObject.h"
using namespace std;

class Screen{
private:
    const float size = 2;
    const float x = .75;
    const float y = .375;
    const float z = .02;
    GLuint v_buf, i_buf, c_buf;
    vector<float> vertices;
    vector<GLushort> indexes;
    float color1 = 0;
    float color2 = 0;
    float color3 = 255;
    vector<GLfloat> color;
    
    
public:
    ~Screen();
    void build();
    void render() const ;
};
