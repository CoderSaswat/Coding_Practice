// Converting a given temperature in Farenheit to Celcius degrees

#include <iostream>
using namespace std;
int main()
{

     float farenhite, celcius;
     cin >> farenhite;
     //   f=(c*1.8)+32;
     //   c=(f-32)/1.8;
     //  celcius=(farenhite-32)*0.5;
     celcius = (farenhite - 32) / 1.8;
     cout << celcius;
}