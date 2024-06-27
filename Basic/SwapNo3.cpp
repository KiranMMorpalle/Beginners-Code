#include <iostream>
using namespace std;
int main(){

    int num1=10, num2=30;

    cout<<"Before swap : Num1 : "<<num1<<" num2 : "<<num2<<endl;
    
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;

    cout<<"After swap : Num1 : "<<num1<<" num2 : "<<num2;


    return 0;
}