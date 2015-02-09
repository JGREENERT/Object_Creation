#include <vector>
#include "Table Parts/Table_Top.h"
#include "Table Parts/Table_Leg.h"
using namespace std;

class table{
public:
    ~table();
    void build();
    void render() const;
};
