#include <iostream>
#include <cmath>
using namespace std;
int main(){

    int base,exponent,res;
    cout<<"Enter base & exponent : \n";
    cin>>base>>exponent;

    res=pow(base,exponent);
    cout<<res;

    return 0;
}