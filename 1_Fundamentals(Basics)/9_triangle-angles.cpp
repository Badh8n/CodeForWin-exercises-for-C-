/**
 * C++ program to find all angles of a triangle if two angles are given
 */

 #include <iostream>
 using namespace std;

 int main(){
    int a,b,c;
    cin >> a >> b;

    c = 180 - (a+b);

    cout << "1st angle of a triangle = " << a << endl;
    cout << "2nd angle of a triangle = " << b << endl;
    cout << "3rd angle of a triangle = " << c << endl;

    return 0;
}