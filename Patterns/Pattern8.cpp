#include <iostream>
using namespace std;

void pattern8(int n){

for(int row=1; row<=2*n; row++)
{
    int start=(row<=n) ? n+1-row : row-n;
    int end=(row<=n) ? n-1+row : (2*n-start); //row-n
    
    for(int col=1; col<=2*n-1; col++)
    {
        if(col>=start && col<=end)
            cout<<"*";
        else
            cout<<" ";
    }
    cout<<endl;
}
}

int main(){
    pattern8(5);
    return 0;
}

//     *    
//    ***   
//   *****  
//  ******* 
// *********
// *********
//  ******* 
//   *****  
//    ***   
//     *  