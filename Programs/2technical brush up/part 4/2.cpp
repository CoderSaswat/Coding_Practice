// Find whether a given number is prime number or not

#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int i;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "not a prime";
            break;
        }
    }

    if (i == n)
        cout << "its a prime number";
}