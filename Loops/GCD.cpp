#include <iostream>
using namespace std;
int main()
{
    int n1, n2, small, large, gcdNo = 0;
    cout << "Enter the no :\n";
    cin >> n1 >> n2;

    if(n1>n2){
        small=n2;
        large=n1;
    }else{
        small=n1;
        large=n2;
    }

    for (int i = 1; i < 10; i++)
    {
        if ((large*i) > (small*10))
            break;

        if (((large*i) % small==0) && ((large*i) <= small*10))
        {
            gcdNo = large * i;
        }
    }
    cout<<"GCD : "<<gcdNo;
    return 0;
}