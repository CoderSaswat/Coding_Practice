// C Program to Add Two Matrices Using Multi-dimensional Arrays

#include <iostream>
using namespace std;
int main()
{
    int m1[10][10];
    int m2[10][10];
    int m3[10][10];
    cout<<"enter row and column\n";
    int r,c;
    cin>>r>>c;
    cout<<"enter first array element \n";
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            cin>>m1[i][j];
        }
    }
    cout<<"enter second array element \n";
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            cin>>m2[i][j];
        }
    }
    cout<<"the first array lements are \n";
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            cout<<m1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"the second array lements are \n";
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            cout<<m2[i][j]<<" ";
        }
        cout<<endl;
    }
    // main logic
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            m3[i][j]=m1[i][j]+m2[i][j];
        }
        cout<<endl;
    }

    cout<<"the sum of the two matrices is \n";
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            cout<<m3[i][j]<<" ";
        }
        cout<<endl;
    }

}
