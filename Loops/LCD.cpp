#include <iostream>
using namespace std;
int main(){

    int num1,num2,small,large,lcd=0;
    cout<<"Enter the no :\n";
    cin>>num1>>num2;

    if(num1>num2){
        small=num2;
        large=num1;
    }else{
        small=num1;
        large=num2;
    }

    for(int i=1; i<10; i++){
        if((large*i)%small==0){
            lcd=large*i;
            break;
        }
    }
    cout<<"LCD : "<<lcd;
    return 0;
}