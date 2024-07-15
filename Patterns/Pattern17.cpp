#include <iostream>
using namespace std;

void pattern17(int n){
    for(int row=1; row<=n; row++){
        for(int col=1; col<=2*n; col++){
            if(col>=1 && col<=row)
                cout<<col;
            else if(col>=2*n+1-row && col<=2*n)
                cout<<2*n+1-col;
            else
                cout<<" ";
        }
        cout<<endl;
     }
}
int main(){
    pattern17(4);
    return 0;
}

// 1      1
// 12    21
// 123  321
// 12344321