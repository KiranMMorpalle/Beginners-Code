#include <iostream>
using namespace std;

void pattern9(int n){
    for(int row=1; row<=2*n-1; row++){
        
        int first=(row<=n) ? row : 2*n-row;
        int second=(row<=n) ? (2*n+1-row) : row+1;
        
        for(int col=1; col<=2*n; col++){
            if(col>=1 && col<=first || col>=second && col<=2*n)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
}

int main(){
    pattern9(5);
    return 0;
}

// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *