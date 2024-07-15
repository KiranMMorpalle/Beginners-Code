#include <iostream>
using namespace std;

void pattern7(int n){
    for(int row=1; row<=n; row++){
        for(int col=1; col<=2*n-1; col++){
            if(col>=row && col<=2*n-row)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
}

int main(){
    pattern7(5);
    return 0;
}

// *********
//  ******* 
//   *****  
//    ***   
//     *    