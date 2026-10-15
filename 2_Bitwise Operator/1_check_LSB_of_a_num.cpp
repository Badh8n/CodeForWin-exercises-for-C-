/**
 * C++ program to check Least Significant Bit (LSB) of a number using bitwise operator
 */

#include <iostream>
using namespace std;

int main()
{
    int num;

    /* Input number from user */
    cout << "Enter any number: ";
    cin >> num;

    /* If (num & 1) evaluates to 1 */
    if(num & 1){
        cout << "LSB of " << num << " is set (1).";
    }
        
    else{
        cout << "LSB of " << num << " is unset (0).";
    }

    return 0;
}

