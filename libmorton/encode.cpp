#include "morton.h"
extern "C"{
    uint64_t encode(const uint_fast32_t x,const uint_fast32_t y,const uint_fast32_t z){
        return libmorton::morton3D_64_encode(x,y,z);
    }

}

