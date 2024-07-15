#include <iostream>
using namespace std;

void pattern22(int n){
    for(int row=1; row<=n; row++)
    {
        int cnt=n-row;   //
        for(int col=1; col<=n; col++){
            if(col>=1 && col<=row)
                cout<<char(64+cnt+col)<<" ";
        }
        cout<<endl;
    }
}
int main(){
    pattern22(5);
    return 0;
}

// E 
// D E 
// C D E 
// B C D E 
// A B C D E 