#include<bits/stdc++.h>
using namespace std;
/*function overloading*/

int number(int n){
    cout<<n<<endl;
    cout<<"calling integer function"<<endl;
}

double number(double n){
    cout<<n<<endl;
    cout<<"calling double function"<<endl;
}

long number(long n){
    cout<<n<<endl;
    cout<<"calling long function"<<endl;
}

int main(){
    number(10);
}