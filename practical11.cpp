#include<bits/stdc++.h>
using namespace std;
// program to display p/q with an exception of (q=0).
int main()
{
    float numerator, denominator, result=0;
    cout << "enter the numerator and denominator:: ";
    cin >> numerator >> denominator;
    try
    {
        if(denominator == 0)
        {
            throw denominator;
        }

        result = numerator/denominator;
    }
    catch(float ex)
    {
        cout << "Exception- divide by zero not allowed... " << endl;
    }
    
    
    cout << "The division of the two numbers is: " << result;

    return 0;
}