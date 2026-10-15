/**
 * C++ program to check positive,negative or zero using simple if statement
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
        cout << "Number is POSITIVE" << endl;
    }
    if(num < 0)
    {
        cout << "Number is NEGATIVE" << endl;
    }
    if(num == 0)
    {
        cout << "Number is ZERO" << endl;
    }

    return 0;
}