/**
 * C++ program to find area of an equilateral triangle
 */
 
 #include<iostream>
 #include<iomanip>
 #include<math.h>
 using namespace std;
 
 int main(){
    float side,area;
    cout << "Enter the value of a side of an equilateral triangle: ";
    cin >> side;
    
    area = ((sqrt(3))/4) * side * side;
    
    cout << "The area of an equilateral triangle: " << fixed << setprecision(3) << area << " sq units" << endl;
    
    return 0;
 }