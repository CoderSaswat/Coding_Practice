#include <iostream>
using namespace std;
int main()
{
    int n;
     cin>>n;
     int flag=1;
    for (int i = 2; i < n-1; i++)
    {
        if (n%i==0)
        {
           flag=0;
           break;
           
        }
       
        
    }
    if (flag)
    {
        cout<<"prime\n";
    }
    else
    {
        cout<<"not prime\n";
    }
    
    
    




cout<<endl;
}