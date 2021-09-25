#program once

#include "memory_player.cpp"
#include "HugeInt.cpp"

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
    
    const HugeInt operator~();
protected:
    
private:
    
};
