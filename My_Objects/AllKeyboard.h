#include "Keyboard Parts/Keyboard.h"
#include "Keyboard Parts/Keys.h"

using namespace std;

class AllKeyboard{
public:
    ~AllKeyboard();
    void build();
    void render() const;
};
