#include <vector>
#include "../../BufferObject.h"
using namespace std;

class Window_Beam{
private:
    const float length = 0.075f;
    const float height = 1.25;
    const float width = 0.125f;
    //Top & Bottom Color
    float color1 = 0.43;
    float color2 = 0.41;
    float color3 = 0.54;
    GLuint v_buf, i_buf, c_buf;
    vector<float> vertices;
    vector<GLushort> indexes;
    vector<GLfloat> color;

public:
    ~Window_Beam();
    void build();
    void render() const;
};