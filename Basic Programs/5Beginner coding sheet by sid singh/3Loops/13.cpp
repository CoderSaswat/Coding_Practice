#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"not a prime number";
            break;
        }
    }
    if(i==n)
    cout<<"it is a prime number"<<endl;
}