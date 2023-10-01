//将 ASCII 转化为字符（使用强制类型转换）
#include<iostream>

int main(){
    using namespace std;
    cout << "输入 ASCII Code:";
    int a;
    cin >> a;
    cout << char(a);
    return 0;
}