#program once

#include "byte_player.h"
#include "bit_player.h"
#include <vector>

usingnamespace std;

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
        this.v=vector(a.v);
    }
    HugeInt& opertaor=(HugeInt a){
        
        return *this;
    }
    HugeInt& operator=(__int64 a){
        *this=HugeInt(a);
        return *this;
    }
    HugeInt operator+(HugeInt a){
        __int16 t=0;
        //...
    }
    HugeInt operator+(__int64 a){
        (*this)+HugeInt(a);
    }
protected:
    vector<__int16>v;
    vector<__int16>::iterator it16;
    vector<__int8>::irerator it8;
private:

};
