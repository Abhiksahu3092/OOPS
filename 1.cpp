#include<iostream>
#include"hero.cpp"//This is used to link the hero.cpp file with this file so as to use the class
using namespace std;
/*To define class in c++*/
/*class is a user defined data type
Object is an instance of class*/
/*For an empty class the compiler by default gives the memory size of 1byte to keep track of all the classes*/

/*Next we have to study about access modifiers-
a.public->can be accessed everywhere 
b.private->can be accessed only inside the class within which it is defined
c.protected*/

/*Note: By default access modifiers are always private*/

/*In case of an empty class, to keep the track of the object, the compiler by itself gives 1byte size to the object*/
int main(){
    /*declaration of hero type object h1*/
    hero abhik;//here h1 is a object
    abhik.health=70;
    abhik.age=20;
    abhik.level='A';
    cout<<"size: "<<sizeof(abhik)<<endl;

    cout<<abhik.age<<endl;
    cout<<abhik.level<<endl;
    cout<<abhik.health<<endl;
    return 0;
}

