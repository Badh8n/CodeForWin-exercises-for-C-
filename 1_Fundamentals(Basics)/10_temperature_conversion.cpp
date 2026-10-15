/**
 * C++ program to convert temperature from degree celsius to fahrenheit
 */

 #include<iostream>
 #include<iomanip>
 using namespace std;

 int main(){
    float celcius,fahrenheit;

    cout << "Enter temperature in celcius: ";
    cin >> celcius;

    fahrenheit = ((9*celcius)/5) + 32;

    cout << celcius << " degree celcius = " << fixed << setprecision(3) << fahrenheit << " degree fahrenheit" << endl;

    return 0;

 }