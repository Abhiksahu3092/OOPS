#include<bits/stdc++.h>
using namespace std;

/*friend function in oops -> It is used to access private member of a class even though this function is not itself a member of this class*/

class myclass{
    int data1;
    int data2;
    public:
    int set_data(int i,int j){
        data1=i;
        data2=j;
    }
    int get_data(){
        return data1;
    }

    friend int mul(myclass obj);//here a friend function is defined which is not a member function of class myclass
};

int mul(myclass obj){
    int ans=obj.data1*obj.data2;
    return ans;
}

int main(){
    myclass obj;
    obj.set_data(10,2);
    cout<<mul(obj)<<endl;
}