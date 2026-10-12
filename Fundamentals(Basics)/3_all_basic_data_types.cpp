/**
 * C++ program to demonstrate input output of primitive data types
 */

#include<iostream>
using namespace std;

int main(){
    char charVal;
    unsigned char uCharVal;

    short shortVal;
    unsigned short uShortVal;

    int intVal;
    unsigned int uIntVal;

    long longVal;
    unsigned long uLongVal;

    long long longLongVal;
    unsigned long long uLongLongVal;

    float floatVal;
    double doubleVal;
    long double longDoubleVal;



    cout << "Enter a character: ";
    charVal = getchar();
    getchar(); // <-- Dummy getchar() to capture enter

    cout << "Enter an unsigned character: ";
    uCharVal = getchar();
    getchar(); // <-- Dummy getchar() to capture enter

    cout << "Enter a signed short value: ";
    cin >> shortVal;

    cout << "Enter an unsigned short value: ";
    cin >> uShortVal;

    cout << "Enter a signed integer value: ";
    cin >> intVal;

    cout << "Enter an unsigned integer value: ";
    cin >> uIntVal;

    cout << "Enter a signed long value: ";
    cin >> longVal;

    cout << "Enter an unsigned long value: ";
    cin >> uLongVal;

    cout << "Enter a signed long long value: ";
    cin >> longLongVal;

    cout << "Enter an unsigned long long value: ";
    cin >> uLongLongVal;

    cout << "Enter a float value: ";
    cin >> floatVal;

    cout << "Enter a double value: ";
    cin >> doubleVal;

    cout << "Enter a long double value: ";
    cin >> longDoubleVal;



    cout << putchar(charVal) << endl;
    cout << putchar(uCharVal) << endl << endl;

    cout << shortVal << endl;
    cout << uShortVal << endl << endl;

    cout << intVal << endl;
    cout << uIntVal << endl << endl;

    cout << longVal << endl;
    cout << uLongVal << endl << endl;

    cout << longLongVal << endl;
    cout << uLongLongVal << endl << endl;

    cout << floatVal << endl;
    cout << doubleVal << endl;
    cout << longDoubleVal << endl;

    return 0;

}