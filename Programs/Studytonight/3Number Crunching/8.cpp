#include <iostream>
using namespace std;
int main()
{

     int n,e;
     cin>>n>>e;
     int mul=1;
    //  for(int i=1;i<=e;i++)
    //  {
    //      mul=mul*n;
    //  }
    //  cout<<mul;


    while(e!=0)
    {
        mul=mul*n;

        e--;
    }
    cout<<mul;


}