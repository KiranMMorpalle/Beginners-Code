#include <iostream>
using namespace std;
int main(){

    int n,n1=0,n2=1,fib=0;
    cout<<"Enter a no :\n";
    cin>>n;

    cout<<n1<<" "<<n2<<" ";

    while(fib<=n)
    {
        fib=n1+n2;
        if(fib<=n)
            cout<<fib<<" ";

        n1=n2;
        n2=fib;
    }
    return 0;
}