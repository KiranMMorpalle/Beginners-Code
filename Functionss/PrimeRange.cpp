#include <iostream>
using namespace std;

void primeRange(int start, int end){
    for(int i=start; i<=end; i++){
        bool flag=true;
        for(int j=2; j<start; j++){
            if(i%j==0){
                flag=false;
                break;
            }
        }
        if(flag)
            cout<<i<<" ";
    }
}

int main(){
    int start,end;
    cout<<"Enter start & end :\n";
    cin>>start>>end;

    cout<<"Prime no in range :\n";
    primeRange(start,end);
    return 0;
}
 
// Enter start & end :
// 10 34
// Prime no in range :
// 11 13 17 19 23 29 31