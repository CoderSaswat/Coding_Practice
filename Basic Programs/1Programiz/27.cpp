// C Program to Make a Simple Calculator Using switch...case

#include <iostream>
using namespace std;
int main()
{

     int n1,n2;
     cin>>n1;
     char op;
     cin>>op;
     cin>>n2;  

     switch(op)
     {
         case '+':
         cout<<n1+n2;
         break;

         case '-':
         cout<<n1-n2;
         break;

         case '*':
         cout<<n1*n2;
         break;

         case '/':
         cout<<((float)n1/n2);
         break;

         default:
         cout<<"u entered invalid operator\n";
     }

}
