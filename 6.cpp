//BMI 计算
#include<iostream>

int main(){
    using namespace std;
    float height,weight;
    cout << "输入你的身高(m)：";
    cin >> height;
    cout << "输入你的体重(kg)；";
    cin >> weight;
    float BMI;
    BMI = weight / height / height;
    cout << "你的 BMI 是：" << BMI;
    return 0;
}
