/** 
 * C++ program to find area of a triangle if base and height are given
 */

#include<iostream>
using namespace std;

int main()
{
    float base, height, area;

    cout << "Enter base of the triangle: ";
    cin >> base;
    cout << "Enter height of the triangle: ";
    cin >> height;


    area = (base * height) / 2;


    cout << "Area of the triangle = " << area << " sq. units" << endl;

    return 0;
}
