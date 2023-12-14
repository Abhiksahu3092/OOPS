#include<bits/stdc++.h>
using namespace std;

/*object pointers in oops*/

class brand{
    string brand_name;

    public:
    char get_name();
    char set_name(string new_name);
};

char brand::set_name(string new_name){
    brand_name=new_name;
}

char brand::get_name(){
    cout<<brand_name<<endl;
}

int main(){
    brand b;
    b.set_name("hyundai");
    b.get_name();

    brand *ptr=&b;//puts the address of b into object pointer ptr
    ptr->get_name();
    
}