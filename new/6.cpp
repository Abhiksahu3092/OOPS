#include<bits/stdc++.h>
using namespace std;

/*Concept of inheritance*/

/*we would like to understand it with the help of an example*/
class A{
    int a;

    public:
    int set_a(int n);
    int get_a();
};

int A::set_a(int n){
    a=n;
}

int A::get_a(){
    return a;
}

class B:public A{
    int b;

    public:
    int set_b(int n);
    int mul();

};

int B::set_b(int n){
    b=n;
}

int B::mul(){
    return b*get_a();
}

int main(){
    B a1;
    a1.set_a(4);
    a1.set_b(2);

    int ans=a1.mul();
    cout<<ans<<endl;
}