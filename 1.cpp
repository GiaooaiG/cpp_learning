//一个没什么用的repeat函数
#include <iostream>
std::string repeat(std::string);
int main(){
    using namespace std;
    string a;
    cout << "input" << endl;
    cin >> a;
    cout << endl << repeat(a);
    return 0;
}

std::string repeat(std::string a) {
    return a;
}