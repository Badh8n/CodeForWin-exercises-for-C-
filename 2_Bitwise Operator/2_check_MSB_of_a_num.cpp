/**
 * C++ program to check Most Significant Bit (MSB) of a number using bitwise operator
 */

#include <iostream>
using namespace std;

#define BITS sizeof(int) * 8 // Total bits required to represent integer

int main()
{
    int num, msb;

    /* Input number from user */
    cout << "Enter any number: ";
    cin >> num;

    /* Move first bit of 1 to highest order */
    msb = 1 << (BITS - 1);

    /* Perform bitwise AND with msb and num */
    if(num & msb)
        cout << "MSB of " << num << " is set (1)." << endl;
    else
        cout << "MSB of " << num << " is unset (0)." << endl;

    return 0;
}