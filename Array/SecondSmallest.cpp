#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter n value :\n";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int smin=0, min=arr[0];

    for(int i=0; i<n; i++){
        if(arr[i]<min){
            smin=min;
            min=arr[i];
        }
        // else if(arr[i]>smin && arr[i]<min) // no needed for small no only for larde no
        //     smin=arr[i];
    }
    cout<<"Smallest : "<<min<<endl;
    cout<<"Sec small : "<<smin;

    return 0;
}

// Enter n value :
// 7
// 2 10 1 14 6 9 12
// Smallest : 1
// Sec small : 2 


// Enter n value :
// 7
// 2 10 1 14 6 9 0 
// Smallest : 0
// Sec small : 1