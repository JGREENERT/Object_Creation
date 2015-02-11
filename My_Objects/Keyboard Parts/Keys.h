#include <vector>
#include "../../BufferObject.h"

using namespace std;

class Keys{
private:
    const int N_POINTS = 13;
    const float TOP_RAD = 0.03f;
    const float BOT_RAD = 0.05f;
    const float CONE_HEIGHT = 0.02f;
    GLuint v_buf, i_buf, c_buf;
    vector<float> vertices;
    vector<GLushort> index;
    float color1 = 1;
    float color2 = 1;
    float color3 = 1;
    vector<GLfloat> color;
public:
    ~Keys();
    void build();
    void render() const;
};