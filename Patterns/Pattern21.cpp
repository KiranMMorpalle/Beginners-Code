#include <iostream>
using namespace std;

void pattern12(int n){
    for(int row=1; row<=n; row++){
        for(int col=1; col<=n; col++){
            if(col>=1 && col<=row)
                cout<<char(64+row)<<" ";
        }
        cout<<endl;
    }
}
int main(){
    pattern12(5);
    return 0;
}

// A 
// B B 
// C C C 
// D D D D 
// E E E E E 