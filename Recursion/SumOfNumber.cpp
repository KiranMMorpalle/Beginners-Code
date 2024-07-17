//Program to Find Sum of N Natural Numbers (entered by users) using Recursion
#include <iostream>
using namespace std;

int sumOfNum(int n){
    if(n==0)
        return 0;
    
    return n+sumOfNum(n-1);
}
int main(){
    
    int ans=sumOfNum(5);
    cout<<ans;
    return 0;
}