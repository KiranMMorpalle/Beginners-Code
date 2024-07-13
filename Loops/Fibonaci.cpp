#include <iostream>
using namespace std;
int main()
{
    int n, num1=0, num2=1, res=0;
    cout<<"Enter a no : \n";
    cin>>n;

    cout<<num1<<" "<<num2<<" ";
    
    for(int i=0; i<n-2; i++){ 
        res=num1+num2;
        cout<<res<<" ";

        num1=num2;
        num2=res;
    }
    return 0;
}