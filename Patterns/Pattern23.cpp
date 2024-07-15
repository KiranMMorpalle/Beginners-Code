#include <iostream>
using namespace std;

void pattern23(int n){
    int tmp=65;
    for(int row=1; row<=n; row++){
        int cnt=65;
        for(int col=1; col<=2*n-1; col++){
            if(col>=n+1-row && col<=n){
                cout<<char(cnt);
                cnt++;
            }
            else if(col>=n+1 && col<=n-1+row){
                cout<<char(tmp);
                tmp--;
            }
            else
                cout<<" ";
        }
        tmp=cnt-1;
        cout<<endl;
    }
}

int main(){
    pattern23(4);
    return 0;
}

//    A   
//   ABA  
//  ABCBA 
// ABCDCBA