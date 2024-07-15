#include <iostream>
using namespace std;

void pattern15(int n){
    for(int row=1; row<=n; row++){
        for(int col=1; col<=n; col++){
            if(col>=1 && col<=row){
                if((row+col)%2==0)
                    cout<<1<<" ";
                else
                    cout<<0<<" ";
            }
        }
        cout<<endl;
    }
}
int main(){
    pattern15(5);
    return 0;
}

// 1 
// 0 1 
// 1 0 1 
// 0 1 0 1 
// 1 0 1 0 1 