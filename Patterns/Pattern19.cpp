#include <iostream>
using namespace std;

void pattern19(int n){
    for(int row=1; row<=n; row++){
        for(int col=1; col<=n; col++){
            if(col>=1 && col<=row)
                cout<<char(64+col)<<" ";
        }
        cout<<endl;
    }
}
int main(){
    pattern19(5);
    return 0;
}

// A 
// A B 
// A B C 
// A B C D 
// A B C D E 