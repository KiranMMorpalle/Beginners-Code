#include <iostream>
using namespace std;
int main()
{
    int yearNo;
    cout<<"Enter year :\n";
    cin>>yearNo;

    if(yearNo%4==0 && yearNo%100!=0 || yearNo%400==0)
        cout<<"Leap year";
    else 
        cout<<"Not Leap year";

    return 0;
}