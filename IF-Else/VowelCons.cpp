//Write a Program to Check Whether a Character is Vowel or Consonant.
// isaplha()- check alphabet or not
#include <iostream>
using namespace std;
int main()
{
    char ch='i';

    if(ch=='A'|| ch=='E' || ch=='I' || ch=='O' || ch=='U')
        cout<<"Vowel";
    else if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        cout<<"Vowel";
    else
        cout<<"Consonent";
    
    return 0;
}