#include<bits/stdc++.h>
using namespace std;

/*OOPS- Object oriented programming in c++*/

class car{
    public:
    int speed_limits;//These are all data members of class cars
    double mileage;
    char name[20];
};

int main(){
    car c1;//defined an object class type cars
    c1.speed_limits=20;
    cout<<c1.speed_limits<<endl;
}