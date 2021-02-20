#include <vector>

#define GET_BYTE(num,x) (num&(0xff<<(x*8-1)))>>(x*8-1)

class HugeInt
{
public:
//构造函数
HugeInt(int a=0){
    this->i.push_back(a);
    this->ii=this->i.begin;
}
//禁用拷贝构造
HugeInt(HugeInt){
    this->i.push_back(a);
    this->ii=this->i.begin
}
//int赋值
HugeInt& operator=(int a){
    *(this->ii)=a;
    return *this;
}
//long long int赋值
HugeInt& operator=(long long int a){
    
}



private:
vector<int>i;
vector<int>::iterator ii;
};
