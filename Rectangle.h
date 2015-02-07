#include <vector>
#include "BufferObject.h"
using namespace std;

class Rectangle{
private:
    const int N_POINTS = 13;
    const float rectangle_width;
    GLuint v_buf, i_buf;
    vector<float> vertices;
    vector<GLushort> indexes;

public:
    ~Rectangle();
    void build();
    void render() const ;
};