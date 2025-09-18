#include<iostream>
using namespace std;
int main()
{
    int a = 59;
    cout <<a<< endl;
    char b = 'b';
    cout <<b<< endl;
    float f = 1.23;
    cout <<f<< endl;
    double d = 1.23;
    cout <<d<< endl;
    int size_in_double = sizeof(d);
    int size_in_float = sizeof(f);
    cout <<"Size in Double :"<<size_in_double<< endl;
    cout <<"Size in Float"<<size_in_float<< endl;
}