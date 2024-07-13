#include <iostream>
using namespace std;
int main(){
    int num, tmp, rev=0;
    cout<<"Enter a num : \n";
    cin>>num;

    tmp=num; // backup
    
    while(tmp!=0){
        rev=(rev*10)+(tmp%10);
        tmp=tmp/10;
    }
    cout<<"Original : "<<num<<endl;
    cout<<"Reverse  : "<<rev;
    
    return 0;
}