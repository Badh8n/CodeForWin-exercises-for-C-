/**
 * C++ program to calculate compound interest(CI)
 */

 #include<iostream>
 #include<iomanip>
 #include<math.h>
 using namespace std;

 int main(){
    float CI,principle,time,rate;

    cout << "Enter principle amount = ";
    cin >> principle;
    cout << "Enter time = ";
    cin >> time;
    cout << "Enter rate = ";
    cin >> rate;

    CI = principle * (pow((1+(rate/100)),time));

    cout << "Compound interest = " << fixed << setprecision(6) << CI << endl;

    return 0;
}