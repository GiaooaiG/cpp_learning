//����ת��Ϊ��ʱ�����ʽ
#include<iostream>
int main() {
    using namespace std;
    const int secpermin = 60, minperhour = 60, hourperday=24;
    cout << "����������";
    long sec_a, sec, min, hour,day;
    cin >> sec_a;
    day = sec_a / secpermin / minperhour / hourperday;
    hour = sec_a / secpermin / minperhour - (hourperday * day);
    min = sec_a / secpermin - minperhour * (hour + hourperday * day);
    sec = sec_a - secpermin * (min + minperhour * (hour + hourperday * day));
    cout << sec_a << " ���� " << day << " �� " << hour << " Сʱ " << min << " �� " << sec << " ��";
    return 0;
}