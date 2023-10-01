//将字符转化为 ASCII 编码
#include "iostream"
int main(){
    using namespace std;
    unsigned char ch;
    cout << "输入字符：" << endl;
    cin >> ch;
    int i;
    i = ch;
    cout << ch << " 的 ASCII 码是 " << i;
    return 0;
}