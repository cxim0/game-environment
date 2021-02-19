
#include <string>
//这样是不是就可以像JAVA中那样String+String了呢
//毕竟还没测试
string& operator+(string a,string b){
    return (string(a)+=b);
}
