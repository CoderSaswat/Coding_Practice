#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int r,rev=0;
    while(n)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    cout<<rev;
}