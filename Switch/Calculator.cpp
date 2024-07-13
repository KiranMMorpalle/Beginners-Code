#include <iostream>
using namespace std;
int main(){
    int num1, num2;
    char ch;

    cout<<"Enter the num : \n";
    cin>>num1>>num2;
    cout<<"Enter the opr(+,-,*,/) \n";
    cin>>ch;

    switch(ch)      //only int & char allowed
    {
        case '+':   
                    cout<<"Add : "<<num1+num2;
                    break;
        case '-': 
                    cout<<"Sub : "<<num1-num2;
                    break;
        case '*':
                    cout<<"Mul : "<<num1*num2;
                    break;
        case '/':
                    cout<<"Div: : "<<(float)num1/num2;  
                    break;
        default:
                cout<<"Invalid Choice..!!";
    }
    return 0;
}