#include <iostream>
using namespace std;

void pattern10(int n){

    for(int row=1; row<=2*n; row++){

        int first=(row<=n) ? n+1-row : row-n;
        int second=(row<=n) ? n+row : 3*n+1-row;
        
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
    pattern10(5);
    return 0;
} 

// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********