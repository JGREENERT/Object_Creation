#include <vector>
#include "Computer Parts/Computer_Connector.h"
#include "Computer Parts/Computer.h"
#include "Computer Parts/compFrame.h"
#include "Computer Parts/compFrame1.h"
#include "Computer Parts/Screen.h"
#include "Computer Parts/ComputerBack.h"
#include "Computer Parts/ComputerStand.h"
using namespace std;

class AllComputer{
public:
    ~AllComputer();
    void build();
    void render() const;
};