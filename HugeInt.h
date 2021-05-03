#program once

#include "byte_player.h"
#include "bit_player.h"
#include <vector>

class HugeInt{
public:
    HugeInt(__int64 a=0){
        __int16*p=(__int16*)&a;
        v.push_back(*p);
        v.push_back(*(p++));
        v.push_back(*(p++));
        v.push_back(*(p++));
    }
    HugeInt(HugeInt a){
        *this=a;
    }
    HugeInt& opertaor=(HugeInt a){
        
        return *this;
    }
    HugeInt& operator=(__int64 a){
        *this=HugeInt(a);
        return *this;
    }
protected:
    vector<__int16>v;
    vector<__int16>::iterator it16;
    vector<__int8>::irerator it8;
private:

};
