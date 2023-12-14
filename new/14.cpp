#include<bits/stdc++.h>
using namespace std;
/*static member functions in c++*/

class student{
    string name;
    static int count;

    public:
    student(string nm){
        name=nm;
        count++;
        cout<<name<<" with employee no. "<<count<<endl;
    }

    static void getcount(){
        cout<<count<<endl;
    }
};

int student::count=1000;//use to initialize the static member variable

int main(){
    student s1("abhik");
    student::getcount();//no use of object to access static member function in c++

    student s2("abhimanyu");
    student::getcount();//no use of object to access static member function in c++

    student s3("abinas");
    student::getcount();//no use of object to access static member function in c++
}