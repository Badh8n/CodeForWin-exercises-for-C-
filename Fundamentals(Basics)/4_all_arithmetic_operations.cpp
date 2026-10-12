/**
 * C++ program to perform all arithmetic operations
 */

 #include<iostream>
 #include <iomanip> // Required for setprecision
 using namespace std;

 int main(){
    int num1,num2;


    cout << "Enter 1st number: ";
    cin >> num1;

    cout << "Enter 2nd number: ";
    cin >> num2;

    int addition = num1+num2;
    int subtraction = num1-num2;
    int multiplication = num1*num2;
    float division = (float)num1/num2;
    float modulus = num1%num2;

    cout << "\nThe result of addition is: "<< addition << endl;
    cout << "The result of subtraction is: " << subtraction << endl;
    cout << "The result of multiplication is: " << multiplication << endl;
    cout << "The result of division is: " << division << endl;
    cout << "The result of modulus is: " << modulus << endl;

    return 0;

}