#include <vector>
#include "../../BufferObject.h"
using namespace std;

class Table_Top{
private:
    const float length = 2;
    const float height = 0.075;
    const float width = 1.5;
    int color1 = 74;
    int color2 = 61;
    int color3 = 52;
    GLuint v_buf, i_buf, c_buf;
    vector<float> vertices;
    vector<GLushort> indexes;
    vector<GLfloat> color;

public:
    ~Table_Top();
    void build();
    void render() const;
};