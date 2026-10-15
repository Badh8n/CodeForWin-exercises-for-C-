/**
 * C++ program to check alphabets using Conditional operator
 */

#include <iostream>
using namespace std;

int main()
{
    char ch;
    
    /*
     * Input character from user
     */
    cout << "Enter any character: ";
    cin >> ch;
    
    /*
     * If (ch>'a' and ch<'z') or (ch>'A' and ch<'Z') then
     *     print alphabet
     * else
     *     print not alphabet
     */
    (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') 
        ? cout << "It is ALPHABET" << endl
        : cout << "It is NOT ALPHABET" << endl;

    return 0;
}