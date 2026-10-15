/**
 * C++ program to calculate simple interest(SI)
 */

 #include<iostream>
 #include<iomanip>
 using namespace std;

 int main(){
    float SI,principle,time,rate;

    cout << "Enter principle amount = ";
    cin >> principle;
    cout << "Enter time = ";
    cin >> time;
    cout << "Enter rate = ";
    cin >> rate;

    SI = (principle * time * rate) / 100;

    cout << "Simple interest = " << fixed << setprecision(6) << SI << endl;

    return 0;
}