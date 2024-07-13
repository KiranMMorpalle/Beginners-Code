// Program to Calculate Sum of first N Natural Numbers
#include <iostream>
using namespace std;
int main()
{
    int n, res=0;

    cout<<"Enter N value :\n";
    cin>>n;

    for(int i=1; i<=n; i++){
        res+=i;
    }
    cout<<"Add : "<<res;
    return 0;
}