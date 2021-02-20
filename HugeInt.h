#include <vector>

#define GET_BYTE(num,x) (num&(0xff<<(x*8-1)))>>(x*8-1)
#define II (this->ii)
#define I (this->i)
#define INT_MAX 1<<(sizeof(int)*8)
/*
这里相关的有个BUG
回头改吧
*/
#define FULLED (II++)==(I.end())
#define RR II=I.begin()

class HugeInt
{
public:
//构造函数
HugeInt(int a=0){
    I.push_back(a);
    II=I.begin();
}
//拷贝构造
HugeInt(HugeInt){
    I=a->i;
    II=a->i.begin();
}
//int赋值
HugeInt& operator=(int a){
    *II=a;
    return *this;
}
//long long int赋值
//warning: only can use in 32bit
HugeInt& operator=(long long int A){
    //拆分
    int a=GET_BYTE(A,1)|GET_BYTE(A,2)|GET_BYTE(A,3)|GET_BYTE(A,4),b=GET_BYTE(A,5)|GET_BYTE(A,6)|GET_BYTE(A,7)|GET_BYTE(A,8);
    //赋值
    *II=a;
    if(FULLED){
        I.push_back(b);
    }else{
        *II=b;
    }
    //归位
    RR;
    return *this;
}
//互相赋值
HugeInt& operator=(HugeInt a){
    I=a->i;
    this->ii=a->i.begin();
}

HugeInt& operator+(int a){
    if(not_special(a,*II)){
        a-=INT_MAX-*II;
        
    }else{
        
    }
    //归位
    RR;
    return *this;
}


protected:
bool not_special(int x,int y){
    if(INT_MAX-y<x){
        return false;
    }
    return true;
}
vector<int>i;
vector<int>::iterator ii;
};
