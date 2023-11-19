#include<iostream>
using namespace std;
/*Concept of getters and setters*/
class info{
    //properties
    /*class is a type of generalised template for all objects*/
    private:
    int age;
    char level;
    int health;

    public:
    int sethealth(int h){
        return h;
    }

    int setage(int a){
        return a;
    }

    char setlevel(char l){
        return l;
    }
};


int main(){
    info p1;
    int age=p1.setage(20);
    int health=p1.sethealth(50);
    char level=p1.setlevel('A');

    cout<<age<<endl;
    cout<<health<<endl;
    cout<<level<<endl;

    cout<<sizeof(p1)<<endl;
    //search about padding and greedy alignment
}