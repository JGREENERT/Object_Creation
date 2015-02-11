#include <vector>
#include "../../BufferObject.h"
using namespace std;

class Window_Glass{
private:
    const float length = 2.25;
    const float height = 1.25;
    const float width = 0.025f;
    //Top & Bottom Color
    float color1 = 0.5;
    float color2 = 0.5;
    float color3 = 0.9;
    GLuint v_buf, i_buf, c_buf;
    vector<float> vertices;
    vector<GLushort> indexes;
    vector<GLfloat> color;

public:
    ~Window_Glass();
    void build();
    void render() const;
};