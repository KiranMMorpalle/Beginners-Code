#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int num,cnt=0;
    cout<<"Enter the num : \n";
    cin>>num;

    for(int i=1; i<=num/2; i++)
    {
        if(num%i==0){
            cout<<i<<" "; 
        }
    }
    

    return 0;
}