#include <vector>
#include "Table Parts/Table_Top.h"
#include "Table Parts/Table_Leg.h"
#include "Table Parts/Table_Crossbar.h"
#include "Table Parts/Table_Bottom_Bar.h"
#include "Table Parts/Table_Wall.h"
using namespace std;

class Table{
public:
    ~Table();
    void build();
    void render() const;
};
