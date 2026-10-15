/**
 * C++ program to set the nth bit of a number
 */

#include <iostream>
using namespace std;

int main()
{
    int num, n, newNum;

    /* Input number from user */
    cout << "Enter any number: ";
    cin >> num;

    /* Input bit position you want to set */
    cout << "Enter nth bit to set (0-31): ";
    cin >> n;

    /* Left shift 1, n times and perform bitwise OR with num */
    newNum = (1 << n) | num;

    cout << "Bit set successfully.\n\n";
    
    cout << "Number before setting " << n << " bit: " << num << " (in decimal)" << endl;
    cout << "Number after setting " << n << " bit: " << newNum << " (in decimal)" << endl;

    return 0;
}