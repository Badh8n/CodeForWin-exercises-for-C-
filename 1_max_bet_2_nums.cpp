/**
 * C++ program to find maximum between two numbers
 */

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;

    /* Input two numbers from user */
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    /* If num1 is maximum */
    if(num1 > num2)
    {
        cout << num1 << " is maximum" << endl;
    }

    /* If num2 is maximum */
    if(num2 > num1)
    {
        cout << num2 << " is maximum" << endl;
    }

    /* Additional condition check for equality */
    if(num1 == num2)
    {
        cout << "Both are equal" << endl;
    }

    return 0;
}