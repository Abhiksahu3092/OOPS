/*Constructors and destructors*/
#include<bits/stdc++.h>
using namespace std;

/*Constructors are special class members which are called by the compiler every time an object of that class is initialized*/

//constructor
class myspace{
public:
    string opinion;

    //default constructor
    myspace(){
        cout<<"default constructor"<<endl;
        opinion="good opinion";
    }

    /*parametrized constructor*/
    myspace(string op){
        cout<<"parametrized constructor"<<endl;
        opinion=op;
    }

    ~myspace(){
        cout<<"destructing........."<<endl;
    }
};

/*Destructor is another special member function that is called by the compiler when the scope of the object ends*/

//destructor



int main(){
    //myspace s1;
    //s1.opinion;
    //cout<<s1.opinion<<endl;

    myspace s2("bad opinion");
    cout<<s2.opinion<<endl;
}//here the scope of s2 object ends so the destructor function is called here