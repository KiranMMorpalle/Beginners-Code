#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int num,cnt=0;
    cout<<"Enter a num :\n";
    cin>>num; 

    for(int i=1; i<=sqrt(num); i++){
        if(num%i==0){
            cnt++;
            if(num%(num/i)==0 && i!=(num/i))
                cnt++;
        }
    }
    if(cnt==2)
        cout<<"Prime";   //only have 2 factors ie. 1 & itself
    else
        cout<<"Not Prime";

    return 0;
}