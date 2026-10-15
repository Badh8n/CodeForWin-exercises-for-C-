/**
 * C++ program to convert centimeter(cm) into meter(m) and kilometer(km)
 */

 #include<iostream>
 #include<iomanip>
 using namespace std;
 
 int main(){
    float cm,m,km;

    cout << "Enter length in cm = ";
    cin >> cm;

    m = cm / 100;
    km = cm / 100000;

    cout << "length in m = " << fixed << setprecision(3) << m << " m" << endl;
    cout << "length in km = " << fixed << setprecision(3) << km << " km"  << endl;
 }