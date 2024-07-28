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

    int smax=0, max=0;

    for(int i=0; i<n; i++){
        if(arr[i]>max){
            smax=max;
            max=arr[i];
        }
        else if(arr[i]>smax && arr[i]<max) //
            smax=arr[i];
    }
    cout<<"Largest : "<<max<<endl;
    cout<<"Sec Large : "<<smax;

    return 0;
}

// Enter n value :
// 7
// 2 10 4 "14" 6 9 "12"
// Largest : 14
// Sec Large : 12