#include <vector>
#include "Window Parts/Window_Beam.h"
#include "Window Parts/Window_Glass.h"
using namespace std;

class Window{
public:
    ~Window();
    void build();
    void render() const;
};