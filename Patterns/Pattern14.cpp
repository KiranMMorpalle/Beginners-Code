#include <iostream>
using namespace std;

void pattern14(int n){
    int tmp=n-1;
    for(int row=1; row<=n; row++){
        for(int col=1; col<=n; col++){
            if(col>=1 && col<=row){
                cout<<tmp+col<<" ";
            }
        }
        tmp--;
        cout<<endl;
    }
}
int main(){
    pattern14(5);
    return 0;
}

// 5 
// 4 5 
// 3 4 5 
// 2 3 4 5 
// 1 2 3 4 5 