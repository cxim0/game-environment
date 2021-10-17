#pragam once

#include <stdint.h>

class HugeInt final
{
public:
    HugeInt(void* d,int byte_len){
        data=new uint8_t[byte_len];
        for(uint32_t i=0;i<byte_len;i++){
            *((uint8_t*)(data+i))=
            *((uint8_t*)(d+i));
        }
        size=byte_len;
    }
    HugeInt(uint64_t i){
        data=(void*)new uint8[8];
        (*(uint64_t*)data)=i;
        size=8;
    }
    HugeInt(HugeInt& source){
        //unsuggested to use except you know what you are doing
        data=source.data;
        size=source.size;
    }
    HugeInt(){size=0;}
    ~HugeInt(){delete[] data;}
    HugeInt& operator=(const HugeInt&);
    HugeInt& operator+=(const HugeInt&);
    HugeInt& operator-=(const HugeInt&);
    HugeInt& operator*=(const HugeInt&);
    HugeInt& operator/=(const HugeInt&);
    HugeInt& operator<<=(const int);
    HugeInt& operator>>=(const int);
    HugeInt& operator^=(const HugeInt&);
    HugeInt& operator&=(const HugeInt&);
    HugeInt& operator|=(const HugeInt&);
    HugeInt operator+(const HugeInt&) const;
    HugeInt operator-(const HugeInt&) const;
    HugeInt operator*(const HugeInt&) const;
    HugeInt operator/(const HugeInt&) const;
    HugeInt operator <<(const int) const;
    HugeInt operator >>(const int) const;
    HugeInt operator^(const HugeInt&) const;
    HugeInt operator&(const HugeInt&) const;
    HugeInt operator|(const HugeInt&) const;
    HugeInt operator~() const;
    size_t size()const{
        return size;
    }
    HugeInt to_length(const size_t) const;
protected:
    void length_to(const size_t);
    inline uint8_t*data8()const{
        return (uint8_t*)data;
    }
    inline uint16_t*data16()const{
        return (uint16_t*)data;
    }
private:
    void*data;
    size_t size;
};

#include "HugeInt.cpp"

