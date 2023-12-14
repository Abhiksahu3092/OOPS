#include<bits/stdc++.h>
using namespace std;
/*use of static data members in oops*/

class student{
    string name;
    static int count;

    public:
    student(string nm){
        name=nm;
        count++;
        cout<<name<<" with employee no. "<<count<<endl;
    }
};

int student::count=1000;

int main(){
    student s1("abhik");
    student s2("abhimanyu");
    student s3("abinas");
}