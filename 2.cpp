//查看各个整形对应字节数
#include<iostream>
#include<climits>
int main(){
    using namespace std;
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long  long n_long_long = LONG_LONG_MAX;
    cout << "最大字节数 最大值：" << endl;
    cout << "int:" << sizeof(n_int) << " " << n_int << endl;
    cout << "short:" << sizeof(n_short) << " " << n_short << endl;
    cout << "long:" << sizeof(n_long) << " " << n_long << endl;
    cout << "long_long:" << sizeof(n_long_long) << " " << n_long_long;
    return 0;
}