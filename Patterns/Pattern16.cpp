#include <iostream>
using namespace std;

void pattern16(int n){
    int tmp=1;
    for(int row=1; row<=n; row++){
        int cnt=1;
        for(int col=1; col<=2*n-1; col++){
            if(col>=n+1-row && col<=n){
                cout<<cnt;
                cnt++;
            }
            else if(col>=n+1 && col<=n-1+row){
                cout<<tmp;
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
    pattern16(4);
    return 0;
}

//    1   
//   121  
//  12321 
// 1234321