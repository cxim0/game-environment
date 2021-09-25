#program once

#include "memory_player.cpp"

class HugeInt{
public:
    HugeInt(void* data,int length);
    template<size_t L>
    HugeInt(Data<L>);
    HugeInt();
    HugeInt& operator=();
    const HugeInt operator+(HugeInt);
    const HugeInt operator-(HugeInt);
    const HugeInt operator*(HugeInt);
    const HugeInt operator/(HugeInt);
    const HugeInt operator<<(int);
    const HugeInt operator>>(int);
    const HugeInt operator^(HugeInt);
    const HugeInt operator&(HugeInt);
    const HugeInt operator|(HugeInt);
    const HugeInt operator~();
    const HugeInt to_length(int);
protected:
    void length_to();
private:
    void*data;
    unsigned int length;
};

#include "HugeInt.cpp"

