#include <vector>
#include "../../BufferObject.h"
using namespace std;

class Table_Leg{
private:
    const float size = 0.5f;
    GLuint v_buf, i_buf, c_buf;
    const float length = 0.075f;
    const float height = 0.5f;
    const float width = 0.075f;
    int color1 = 255;
    int color2 = 0;
    int color3 = 0;
    vector<float> vertices;
    vector<GLushort> indexes;
    vector<GLfloat> color;

public:
    ~Table_Leg();
    void build();
    void render() const;
};