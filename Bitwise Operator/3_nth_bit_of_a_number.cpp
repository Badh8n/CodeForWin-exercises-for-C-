/**
 * C++ program to get the nth bit of a number
 */

#include <iostream>
using namespace std;

int main()
{
    int num, n, bitStatus;

    /* Input number from user */
    cout << "Enter any number: ";
    cin >> num;

    /* Input bit position you want to check */
    cout << "Enter nth bit to check (0-31): ";
    cin >> n;

    /* Right shift num, n times and perform bitwise AND with 1 */
    bitStatus = (num >> n) & 1;

    cout << "The " << n << " bit is set to " << bitStatus << endl;

    return 0;
}