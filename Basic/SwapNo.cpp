#include <iostream>
using namespace std;
int main(){
    
    int num1=10, num2=20, tmp=0;

    cout<<"Before swap :\n"<<num1<<" "<<num2<<endl;
    tmp=num1;
    num1=num2;
    num2=tmp;

    cout<<"After swap :\n"<<num1<<" "<<num2;

    return 0;
}
