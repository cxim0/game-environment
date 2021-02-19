
#include <string>
//这样是不是就可以像JAVA中那样String+String了呢
//毕竟还没测试
//说白了给自己写一个语法糖
string& operator+(string a,string b){
    return (string(a)+=b);
}
