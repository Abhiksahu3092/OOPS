/*arrays, pointers and references in oops using classes*/
#include<bits/stdc++.h>
using namespace std;

class cricketers{
    string name;
    int centuries;
    string nationality;

    public:
    void set_data(string n,int c,string nat){
        name=n;
        centuries=c;
        nationality=nat;
    }

    string get_name(){
        return name;
    }

    int get_centuries(){
        return centuries;
    }

    string get_nationality(){
        return nationality;
    }
};

int main(){
    cricketers indian[3];
    int size=sizeof(indian)/sizeof(indian[0]);

    indian[0].set_data("Rohit sharma",45,"indian");
    indian[1].set_data("virat kohli",77,"indian");
    indian[2].set_data("ms dhoni",16,"indian");

    for(int i=0;i<size;i++){
        cout<<indian[i].get_name()<<endl;
        cout<<indian[i].get_centuries()<<endl;
        cout<<indian[i].get_nationality()<<endl;
    }
}
