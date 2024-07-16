//Program to Convert Decimal to Binary number manually by creating user-defined functions.
#include <iostream>
#include <cmath>
using namespace std;

void decimalToBinary(int n){      //13=1101
    int ans=0, i=0;

    while(n!=0){
        int k=n&1;
        ans=(k*pow(10,i))+ans;

        n>>1;
        i++;
    }
    cout<<ans;
    //cout<<"Decimal : "<<ans<<"\nBinary : "<<ans;
}

int main(){
    decimalToBinary(13);
    return 0;
}