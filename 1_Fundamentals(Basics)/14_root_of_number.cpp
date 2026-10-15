/**
 * C program to find square root of a number
 */

 #include<iostream>
 #include<math.h>       // Used for sqrt() function
 using namespace std;

 int main(){
    double num,root;

    cout << "Enter any number to find square root = ";
    cin >> num;

    root = sqrt(num);

    cout << "Square root of " << num << " is = " << root << endl;

    return 0;
 }