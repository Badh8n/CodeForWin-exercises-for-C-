/**
 * C++ program to calculate diameter, circumference and area of circle
 */

 #include<iostream>
 using namespace std;

 int main(){
    float radius;

    float diameter,circumference,area;

    cout << "Enter the value of radius: ";
    cin >> radius;

    cout << "\n";

    diameter = 2 * radius;
    circumference = 2 * 3.1416 * radius;
    area = 3.1416 * radius * radius;

    cout << "Diameter = " << diameter << " units" << endl;
    cout << "Circumference = " << circumference << " units" << endl;
    cout << "Area = " << area << " sq. units" << endl;

    return 0;
 }