#include <iostream>
using namespace std;
int main(){

    int row, col;
    cout<<"Entet the row & col value :\n";
    cin>>row>>col;

    for(int i=1; i<=row; i++){
        for(int j=1; j<=col; j++){
            //cout<<"* ";
            if(col>=1 && col<=col)
                cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
} 

// * * * * * 
// * * * * * 
// * * * * * 