// C Program to find the Largest of Three Numbers

#include <iostream>
using namespace std;
int main()
{

     int n1,n2,n3;
     cin>>n1>>n2>>n3;

    
    cout<<(n1>n2 && n1>n3 ? n1:n2>n3?n2:n3);



}