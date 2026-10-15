/**
 * C++ program to find maximum between three numbers using conditional operator
 */

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3, max;

    /*
     * Input three numbers from user
     */
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    /*
     * If num1 > num2 and num1 > num3 then
     *     assign num1 to max
     * else if num2 > num3 then
     *     assign num2 to max
     * else
     *     assign num3 to max
     */
    max = (num1 > num2 && num1 > num3) ? num1 :
          (num2 > num3) ? num2 : num3;

    cout << "\nMaximum between " << num1 << ", " << num2 << " and " << num3 << " = " << max << endl;

    return 0;
}