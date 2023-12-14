#include<bits/stdc++.h>
using namespace std;
/*about new and delete in oops*/

int main(){
    int *p;
    p= new int;
    if(!p){
        cout<<"allocation error"<<endl;
    }
    *p=11;
    cout<<*p<<endl;
    delete p;
}