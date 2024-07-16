//Program to Convert Binary Number to Decimal manually by creating user-defined functions
#include <iostream>
#include <cmath>
using namespace std;

void binaryToDecimal(int num){       //5=101
    int ans=0, i=0,n=num;
    while(n!=0){
        if(n%10)      
            ans+=pow(2,i);
        
        n=n/10;
        i++;
    }
    cout<<"Binary : "<<num<<"\nDecimal : "<<ans;
}
int main(){
    binaryToDecimal(101);
    return 0;
}

// Binary : 101
// Decimal : 5