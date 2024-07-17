#include <iostream>
using namespace std;

int gcdFun(int a,int b){
    int gcd;

    if(b==0)
        return 1;
    if(b%a==0)
        gcd=b%a;

    return b*gcdFun(a,b-1);
}
int main(){
    int res=gcdFun(3,7);
    cout<<res;
    return 0;
}