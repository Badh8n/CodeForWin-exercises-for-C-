/**
 * C++ program to check positive negative or zero using simple if statement
 */

#include <iostream>
using namespace std;

int main()
{
    int num;
    
    /* Input number from user */
    cout << "Enter any number: ";
    cin >> num;

    if(num > 0)
    {
        cout << "Number is POSITIVE";
    }
    if(num < 0)
    {
        cout << "Number is NEGATIVE";
    }
    if(num == 0)
    {
        cout << "Number is ZERO";
    }

    return 0;
}