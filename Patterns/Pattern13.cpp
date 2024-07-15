#include <iostream>
using namespace std;

void pattern13(int n){
    int cnt=1;
    for(int row=1; row<=n; row++){
        for(int col=1; col<=n; col++){
            if(col>=1 && col<=row){
                cout<<cnt<<" ";
                cnt++;
            }     
        }
        cout<<endl;
    }
}
int main(){
    pattern13(5);
    return 0;
}

// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15 