#include <vector>

#define GET_BYTE(num,x) (num&(0xff<<(x*8-1)))>>(x*8-1)

class HugeInt
{
public:
//构造函数
HugeInt(int a=0){
    this->i.push_back(a);
    this->ii=this->i.begin();
}
//禁用拷贝构造
HugeInt(HugeInt){
    this->i.push_back(0);
    this->ii=this->i.begin();
}
//int赋值
HugeInt& operator=(int a){
    *(this->ii)=a;
    return *this;
}
//long long int赋值
HugeInt& operator=(long long int A){
    int a=GET_BYTE(A,1)|GET_BYTE(A,2)|GET_BYTE(A,3)|GET_BYTE(A,4),b=GET_BYTE(A,5)|GET_BYTE(A,6)|GET_BYTE(A,7)|GET_BYTE(A,8);
    *(this->ii)=a;
    if(
    
    this->ii=this->i.begin();
    return *this;
}




private:
vector<int>i;
vector<int>::iterator ii;
};
