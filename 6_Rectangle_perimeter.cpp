/**
 * C++ program to find perimeter of rectangle
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

    float perimeter = 2 * (length + width);

    cout << "The perimeter of rectangle = " << fixed << setprecision(3) << perimeter << " units" << endl;
    return 0;
 }