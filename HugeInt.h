#include <vector>

#define GET_BYTE(num,x) (num&(0xff<<(x*8-1)))>>(x*8-1)
#define II (this->ii)
#define I (this->i)
#define INT_MAX 1<<(sizeof(int)*8)
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
    int * z=&A;
    int a=*z,b=*(z++);
    //赋值
    *II=a;
    if((II++)==(I.end())){
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
    return *this;
}

//普通整数加
HugeInt& operator+(int a){
    add_in(II,a);
    return *this;
}

//long long int加
//warning: only can use in 32 bit
HugeInt& operator+(long long int A){
    int * z=&A;
    int a=*z,b=*(z++);                                 
    add_in(II,a);
    add_in(II,b);
    return *this;
}

//互相加
HugeInt& operator+(HugeInt a){
    for(vector<int>::iterator f=a.i.begin();f!=a.i.end();f++,II++){
        add_in(II,*f);
    }
    RR;
    return *this;
}









protected:


//先写成递归，回头改成循环，防爆栈
void add_in(vector<int>::iterator ws,int a){
    if(*ws==I.end()){
        I.push_back(0);
    }
    if(not_special(*ws,a){
        *ws+=a;
        return;
    }
    int cz=a;
    cz-=INT_MAX-*ws;
    *ws=0;
    add_in(ws++,cz);
}

bool not_special(int x,int y){
    if(INT_MAX-y<x){
        return false;
    }
    return true;
}
vector<int>i;
vector<int>::iterator ii;
};
