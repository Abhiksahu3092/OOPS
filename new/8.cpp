#include<bits/stdc++.h>
using namespace std;

/*passing objects to functions */

class pass{
    int num;

    public:
    int set_data(int i){
        num=i;
    }
    int get_data(){
        return num;
    }
};

int sqr(pass p1){
    int ans=p1.get_data()*p1.get_data();
    return ans;
}

int main(){
    pass p1;
    p1.set_data(10);

    int a=sqr(p1);
    cout<<a<<endl;
}