#include <iostream>
using namespace std;
int main(){

    int base,exponent,res=1;
    cout<<"Enter base & exponent :\n";
    cin>>base>>exponent;

    for(int i=0; i<exponent; i++){
        res=res*base;
    }
    cout<<"Power : "<<res;

    return 0;
}