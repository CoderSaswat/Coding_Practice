// C Program to Find Factorial of a Number

#include <iostream>
using namespace std;
int main()
{

     int n;
     cin>>n;
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<fact;

}