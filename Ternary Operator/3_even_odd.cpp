/**
 * C++ program to check even or odd number using conditional operator
 */

#include <iostream>
using namespace std;

int main()
{
    int num;

    /* Input a number from user */
    cout << "Enter any number to check even or odd: ";
    cin >> num;

    /* 
     * If n%2==0 then 
     *     print it is even
     * else
     *     print it is odd
     */
    (num%2 == 0) 
        ? cout << "The number is EVEN" << endl
        : cout << "The number is ODD" << endl;

    return 0;
}