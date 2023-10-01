//将秒转化为天时分秒格式
#include<iostream>
int main() {
    using namespace std;
    const int secpermin = 60, minperhour = 60, hourperday=24;
    cout << "输入秒数：";
    long sec_a, sec, min, hour,day;
    cin >> sec_a;
    day = sec_a / secpermin / minperhour / hourperday;
    hour = sec_a / secpermin / minperhour - (hourperday * day);
    min = sec_a / secpermin - minperhour * (hour + hourperday * day);
    sec = sec_a - secpermin * (min + minperhour * (hour + hourperday * day));
    cout << sec_a << " 秒是 " << day << " 天 " << hour << " 小时 " << min << " 分 " << sec << " 秒";
    return 0;
}