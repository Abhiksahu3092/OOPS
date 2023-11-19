#include<bits/stdc++.h>
using namespace std;

/*OOPS- Object oriented programming in c++*/

class car{
    public: //rhis is called as access specifiers
    int speed_limits;//These are all data members of class cars
    double mileage;
    char name[20];

    void print(){
        cout<<"Hello, welcome to oops"<<endl;
    }
};

int main(){
    car c1;//defined an object class type cars
    c1.speed_limits=20;
    cout<<c1.speed_limits<<endl;

    c1.print();
}

/*Important concepts of OOPS-
a. Inheritance
b. Abstraction
c. Polymorphism
d. encapsulation
*/