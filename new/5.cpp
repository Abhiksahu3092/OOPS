#include<bits/stdc++.h>
using namespace std;

/*constructor and desctructor function*/

class name{
    public:
    string stud_name;

    name(string my_name);//parametrized constructor
    ~name();
};

name::name(string my_name){
    cout<<"constructing"<<endl;
    stud_name=my_name;
    cout<<stud_name<<endl;
}

name::~name(){
    cout<<"destructing......."<<endl;
}

int main(){
    name name1("abhik");//calls constructor
    //by default calls the destructor function at the end of the main function
    return 0;
}