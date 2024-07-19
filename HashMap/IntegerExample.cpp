#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    //input array
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    //pre-computing
    int hash[13]={0};
    for(int j=0; j<n; j++){
        hash[arr[j]]++;
    }

    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        //fetching
        cout<<num<<"->"<<hash[num]<<endl;
    }

    return 0;
}

// 5
// 1 3 2 1 3
// 5
// 1 4 2 3 12

// 1->2
// 4->0
// 2->1
// 3->2
// 12->0