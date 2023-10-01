#include<iostream>
#include<string>

int main(){
    using namespace std;
    int id;
    string name;
    double prize;
    unsigned int amount;
    struct shop{
        int id;
        string name;
        double prize;
        unsigned int amount;
    }pen{
        1,"pen",3,10
    },bread{2,"bread",7,4};
    cin >> id;
    cout << bread.amount;
}