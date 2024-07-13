#include <iostream>
using namespace std;
int main(){
    int num,tmp,rev=0;
    cout<<"Enter the num :\n";
    cin>>num;

    tmp=num; // backup

    while(tmp!=0){
        rev=(rev*10)+(tmp%10);
        tmp=tmp/10;
    }
    cout<<"Reverse : "<<rev<<endl;
    
    if(rev==num)
        cout<<"Palindrom";
    else
        cout<<"Not Palindrom";

    return 0;
}