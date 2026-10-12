/**
 * C++ program to find area of rectangle
 */

 #include<iostream>
 #include <iomanip> // Required for setprecision
 using namespace std;

 int main(){
    float length,width;

    cout << "Enter length of rectangle: ";
    cin >> length;
    cout << "Enter width of rectangle: ";
    cin >> width;

    float area = length * width;

    cout << "The Area of rectangle = " << fixed << setprecision(3) << area << " sq. units" << endl;
    return 0;
 }