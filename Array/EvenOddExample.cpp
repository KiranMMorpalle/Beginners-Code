#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n value :\n";
    cin>>n;

    int arr[n];   //

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"even/odd : ";
    
    for(int i=0; i<n; i++){
        if(arr[i]%2!=0)        //even: arr[i]%2==0       odd: arr[i]%2!=0
            cout<<arr[i]<<" ";
    }
    return 0;
}

// Enter n value :
// 7
// 1 2 3 4 5 6 7
// even/odd : 2 4 6 
// even/odd : 1 3 5 7 