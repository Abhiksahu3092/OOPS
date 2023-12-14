#include<bits/stdc++.h>
using namespace std;

/*friend function in oops -> It is used to access private member of a class even though this function is not itself a member of this class*/

class myclass{
    int data;
    public:
    int set_data(int i){
        data=i;
    }
    int get_data(){
        return data;
    }
};