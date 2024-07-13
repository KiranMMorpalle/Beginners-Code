#include <iostream>
using namespace std;
int main(){

    int num,tmp,sum=0;
    cout<<"Enter a num : \n";
    cin>>num;

    tmp=num;  //backup

    while(tmp!=0){
        sum=sum+(tmp%10);
        tmp=tmp/10;
    }

    cout<<"Num : "<<num<<endl;
    cout<<"Sum : "<<sum;
    return 0;
}