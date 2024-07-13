#include <iostream>
#include<cmath>
using namespace std;
int main(){
    int num,digit,tmp,res=0;
    cout<<"Enter a num :\n";
    cin>>num;

    tmp=num; //backup
    digit=log10(num)+1;  // gives total digit in number
    cout<<"Digit : "<<digit<<endl;

    while(tmp!=0){
        int rem=tmp%10;
        res=res+round(pow(rem,digit));  /// use 'round()' wothout 153 => not armstrong
        tmp=tmp/10;
    }
    cout<<"Result : "<<res<<endl;

    //valdate
    if(res==num)
        cout<<"Armstrong";
    else
        cout<<"Not armstrong";

    return 0;
}