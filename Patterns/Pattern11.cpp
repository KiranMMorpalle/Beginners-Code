#include <iostream>
using namespace std;

void pattern11(int n){
    for(int row=1; row<=n; row++){
        for(int col=1; col<=n; col++){
            if(col>=1 && col<=row)
                cout<<col;
        }
        cout<<endl;
    }
}

int main(){
    pattern11(5);
    return 0;
}

// 1
// 12
// 123
// 1234
// 12345