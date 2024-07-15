#include <iostream>
using namespace std;

void pattern5(int n){
    for(int row=1; row<=2*n-1; row++)
    {    
        int res=(row<=n) ? row : 2*n-row;    
        for(int col=1; col<=n; col++)
        {
            if(col>=1 && col<=res)
                cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    pattern5(5);
    return 0;
}

// * 
// * * 
// * * * 
// * * * * 
// * * * * * 
// * * * * 
// * * * 
// * * 
// * 