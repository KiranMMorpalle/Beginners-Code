//Write a Program to Find Largest Number Among Three Numbers entered by users
// if we give more than n--input then it only take n, ignore above --not gives error

#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3;

    cout<<"Enter no : \n";
    cin>>num1>>num2>>num3;

    if(num1>num2 && num1>num3)
        cout<<"Largest No : "<<num1;
    else if(num2>num1 && num2>num3) 
        cout<<"Largest No : "<<num2;
    else
        cout<<"Largest No : "<<num3;

    return 0;
}