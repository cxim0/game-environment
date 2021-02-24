#include <vector>
#include <string>
#include <stdio.h>

#define II (this->ii)
#define I (this->i)
#define INT_MAX (~(1<<(sizeof(int)*8-1)))

/*
我的目标是：取消上限，下限再说
*/
class HugeInt
{
public:
//构造函数
HugeInt(int a=0){
    I.push_back(a);
    II=I.begin();
}
HugeInt(long long int a){
    //第n版了，实在懒得再写一遍QWQ
    *this=a;
}
//拷贝构造
HugeInt(HugeInt a){
    I=vector<int>(a->i);
    II=I.begin();
}
//int赋值
HugeInt& operator=(int a){
    I=vector<int>();
    I.push_back(a);
    II=I.begin;
    return *this;
}
//long long int赋值
HugeInt& operator=(long long int A){
    I=vector<int>();
    //拆分
    int * z=&A;
    int a=*z,b=*(z++);
    //赋值
    I.push_back(a);
    I.push_back(b);
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
HugeInt& operator+(long long int A){
    return ((*this)+A);
}

//互相加
HugeInt& operator+(HugeInt a){
    for(vector<int>::iterator f=a.i.begin();f!=a.i.end();f++,II++){
        add_in(II,*f);
    }
    RR;
    return *this;
}
//懂的都懂
HugeInt& operator+=(HugeInt a){
    return ((*this)=((*this)+a));
}
//懂的都懂
HugeInt& operator+=(int a){
    return ((*this)=((*this)+a));
}
//懂的都懂
HugeInt& operator+=(long long int a){
    return ((*this)=((*this)+a));
}
//懂的都懂
HugeInt& operator++(){
    return ((*this)+=1);
}
//懂的都懂
HugeInt& operator++(int){
	return ((*this)+=1);
}

protected:

/*
//先写成递归，回头改成循环，防爆栈
void add_in(vector<int>::iterator ws,int a){
    //检查是否已满，并处理
    if(ws==I.end()){
        I.push_back(0);
    }
    //非特殊情况处理
    if(not_special(*ws,a){
        *ws+=a;
        return;
    }else{
        //特殊情况处理
        a-=INT_MAX-*ws;
        *ws=a;
        //add_in(ws++,1);
	a=1;
	ws++;
	//检查是否已满，并处理
	if(ws==I.end()){
	    I.push_back(0);
	}
	//非特殊情况处理
        if(not_special(*ws,a)){
	    *ws+=a;
            return;
	}else{
	//特殊情况处理
	    ...
	}
    }
}
*/
void add_in(vector<int>::iterator ws,int a){
    while(){
		//检查是否已满，并处理
		if(ws==I.end()){
            I.push_back(0);
        }
		//other
	}
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
