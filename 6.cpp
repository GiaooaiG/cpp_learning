//BMI ����
#include<iostream>

int main(){
    using namespace std;
    float height,weight;
    cout << "����������(m)��";
    cin >> height;
    cout << "�����������(kg)��";
    cin >> weight;
    float BMI;
    BMI = weight / height / height;
    cout << "��� BMI �ǣ�" << BMI;
    return 0;
}
