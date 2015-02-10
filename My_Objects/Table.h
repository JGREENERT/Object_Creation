#include <vector>
#include "Table Parts/Table_Top.h"
#include "Table Parts/Table_Leg.h"
#include "Table Parts/Table_Crossbar.h"
#include "Table Parts/Table_Bottom_Bar.h"
using namespace std;

class table{
public:
    ~table();
    void build();
    void render() const;
};
