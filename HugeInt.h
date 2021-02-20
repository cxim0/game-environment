#include <vector>

class HugeInt
{
public:
//构造函数
HugeInt(int a=0){
    this->i.push_back(a);
    this->ii=this->i.begin;
}
//禁用拷贝构造
HugeInt(HugeInt){}





private:
vector<int>i;
vector<int>::iterator ii;
};
