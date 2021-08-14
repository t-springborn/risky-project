#include <list>
#include "territory.h"
#include <cstdint>

class Territory{


    private:
        uint16_t armies;
        std::list<Border> borders;
};
