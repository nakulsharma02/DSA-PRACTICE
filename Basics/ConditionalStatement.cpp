#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter The Three Numbers:"<<endl;
    cin>>a>>b>>c;
    if (a>b){
        if(a>c){
            cout<<"The Largest Number is:"<<a<<endl;
        }
    }
    if(b>a){
        if(b>c){
            cout<<"The Largest Number is:"<<b<<endl;
        }
    }
    if(c>a){
        if(c>b){
            cout<<"The Largest Number is:"<<c<<endl;
        }
    }
}