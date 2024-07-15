#include <iostream>
using namespace std;

void pattern20(int n){
    for(int row=1; row<=n; row++){
        for(int col=1; col<=n; col++){
            if(col>=1 && col<=n+1-row)
                cout<<char(64+col)<<" ";
        }
        cout<<endl;
    }
}
int main(){
    pattern20(5);
    return 0;
}

// A B C D E 
// A B C D 
// A B C 
// A B 
// A 