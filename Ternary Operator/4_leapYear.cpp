/**
 * C++ program to check leap year using conditional operator
 */

#include <iostream>
using namespace std;

int main()
{
    int year;
 
    /*
     * Input year from user
     */
    cout << "Enter any year: ";
    cin >> year;

    /*
     * If year%4==0 and year%100==0 then
     *     print leap year
     * else if year%400==0 then
     *     print leap year
     * else
     *     print common year 
     */
    (year%4==0 && year%100!=0) ? cout << "LEAP YEAR" << endl :
        (year%400 ==0 ) ? cout << "LEAP YEAR" << endl : cout << "COMMON YEAR" << endl;

    return 0;
}