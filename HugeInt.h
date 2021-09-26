#program once

#include "memory_player.cpp"

class HugeInt{
public:
    HugeInt(void* data,int length);
    template<size_t L>
    HugeInt(Data<L>);
    HugeInt(int);
    HugeInt();
    HugeInt& operator=();
    HugeInt& operator+=(HugeInt);
    HugeInt& operator-=(HugeInt);
    HugeInt& operator*=(HugeInt);
    HugeInt& operator/=(HugeInt);
    HugeInt& operator<<=(signed int);
    HugeInt& operator>>=(signed int);
    HugeInt& operator^=(HugeInt);
    HugeInt& operator&=(HugeInt);
    HugeInt& operator|=(HugeInt);
    const HugeInt operator+(HugeInt);
    const HugeInt operator-(HugeInt);
    const HugeInt operator*(HugeInt);
    const HugeInt operator/(HugeInt);
    const HugeInt operator<<(signed int);
    const HugeInt operator>>(signed int);
    const HugeInt operator^(HugeInt);
    const HugeInt operator&(HugeInt);
    const HugeInt operator|(HugeInt);
    const HugeInt operator~();
    const HugeInt& to_length(int);
protected:
    void length_to();
    memory_player::int8*data8();
    memory_player::int16*data16();
private:
    void*data;
    unsigned int length;
};

#include "HugeInt.cpp"

