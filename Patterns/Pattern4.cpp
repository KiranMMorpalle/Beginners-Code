#include <iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter N value :\n";
    cin>>n;

    for(int row=1; row<=n; row++){
        for(int col=1; col<=n; col++){
            if(col>=1 && col<=n+1-row)
                cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

// Enter N value :
// 5

// *****
// ****
// ***
// **
// *