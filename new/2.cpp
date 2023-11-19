/*class and objects in c++ oops*/
#include<bits/stdc++.h>
using namespace std;

/*member function-
1. inside class definition
2. outside class definition*/

class player{
public:
    string name;
    int jersery_no;
    string role;

    void nothing(){
        cout<<"this is inside class function"<<endl;
    }

    void print();
};

void player::print(){
    cout<<"this is an outside class function"<<endl;
}

int main(){
    player p1;

    p1.name="rohit";
    p1.jersery_no=45;
    p1.role="batsman";
    
    p1.print();

}