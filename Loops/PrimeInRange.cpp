#include<iostream>
using namespace std;
int main(){

    int start, end, cnt=0;
    bool flag=true;

    cout<<"Enter the start & end : \n";
    cin>>start>>end;

    for(int i=start; i<=end; i++){
        flag=true;
        for(int j=2; j<i; j++){
            if(i%j==0){
                flag=false;
                break;
            }
        }
        if(flag)
            cout<<i<<" ";
    }
    
    return 0;
}