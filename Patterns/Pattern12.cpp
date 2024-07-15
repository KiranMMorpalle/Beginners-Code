#include <iostream>
using namespace std;

void pattern12(int n){
    for(int row=1; row<=n; row++){
        for(int col=1; col<=n; col++){
            if(col>=1 && col<=n+1-row)
                cout<<col;
        }
        cout<<endl;
    }
}
int main(){
    pattern12(5);
    return 0;
}

// 12345
// 1234
// 123
// 12
// 1