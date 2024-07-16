#include <iostream>
using namespace std;

bool isPrime(int n){
    int flag=true;
    for(int i=2; i<=n/2; i++){
        if(n%i==0){
            return false; 
        }
    }
    if(flag)
        return true;
}

void primeSumComb(int num){
    for(int k=2; k<=num/2; k++)
    {
        if( isPrime(k) && isPrime(num-k))
            cout<<num<<"="<<k<<"+"<<num-k<<endl;
    }
}

int main(){
    primeSumComb(34);
    return 0;
}

// 34=3+31
// 34=5+29
// 34=11+23
// 34=17+17