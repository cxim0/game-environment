#include <vector>

class HugeInt
{
public:
//构造函数
HugeInt(int a=0){
    this->i.push_back(a);
}
//禁用拷贝构造
HugeInt(HugeInt){}





private:
vector<int>i;
};
