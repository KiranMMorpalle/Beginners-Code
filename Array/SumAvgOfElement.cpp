#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){   
    int n, sum=0;
    cout<<"Enter n value :\n";
    cin>>n;

    int arr[n]; //
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<"Sum : "<<sum<<endl;
    cout<<"Avg : "<<sum/n;

    return 0;
}

// Enter n value :
// 5
// 1 2 3 4 5
// Sum : 15
// Avg : 3