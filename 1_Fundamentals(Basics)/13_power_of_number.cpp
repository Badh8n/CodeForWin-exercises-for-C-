/**
 * C++ program to find power of any number
 */

 #include<iostream>
 #include<math.h>       // Used for pow() function

 using namespace std;

 int main(){
    double base,expo,power;

    cout << "Enter base = ";
    cin >> base;

    cout << "Enter expo = ";
    cin >> expo;

    power  = pow(base,expo);

    cout << "Base^expo = " << power << endl;

    return 0;
 }