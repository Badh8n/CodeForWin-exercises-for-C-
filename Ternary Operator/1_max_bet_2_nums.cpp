/**
 * C++ program to find maximum between two numbers using conditional operator
 */

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, max;

    /*
     * Input two number from user
     */
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    /*
     * If num1 > num2 then
     *     assign num1 to max
     * else
     *     assign num2 to max 
     */
    max = (num1 > num2) ? num1 : num2;

    cout << "Maximum between " << num1 << " and " << num2 << " is " << max << endl;

    return 0;
}