#include <iostream>
#include <cmath>
using namespace std;

void pattern18(int n){
    for(int row=1; row<2*n; row++){
        for(int col=1; col<2*n; col++){
            int first=max(2*n-col,2*n-row);
            int sec=max(col,row);
            int ans=max(first,sec);
            cout<<ans-(n-1)<<" ";
        }
        cout<<endl;
    }
}
int main(){
    pattern18(4);
    return 0;
}

// 4 4 4 4 4 4 4 
// 4 3 3 3 3 3 4 
// 4 3 2 2 2 3 4 
// 4 3 2 1 2 3 4 
// 4 3 2 2 2 3 4 
// 4 3 3 3 3 3 4 
// 4 4 4 4 4 4 4

// 5 5 5 5 5 5 5 5 5 
// 5 4 4 4 4 4 4 4 5 
// 5 4 3 3 3 3 3 4 5 
// 5 4 3 2 2 2 3 4 5 
// 5 4 3 2 1 2 3 4 5 
// 5 4 3 2 2 2 3 4 5 
// 5 4 3 3 3 3 3 4 5 
// 5 4 4 4 4 4 4 4 5 
// 5 5 5 5 5 5 5 5 5