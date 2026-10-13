/**
 * C++ program to convert days in to years, weeks and remaining days
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int days;
    cout << "Enter days = ";
    cin >> days;

    int years = days / 365;
    int weeks = (days - (years * 365)) / 7;
    int remaining_days = days - ((years * 365) + (weeks * 7));

    cout << "Years = " << years << endl;
    cout << "Weeks = " << weeks << endl;
    cout << "Remaining days = " << remaining_days << endl;

    return 0;
}