/**
 * C++ program to calculate total, average and percentage of five subjects
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float eng, phy, chem, math, comp; 
    float total, average, percentage;

    
    cout << "Enter marks of five subjects: \n";
    cin >> eng >> phy >> chem >> math >> comp;

    
    total = eng + phy + chem + math + comp;
    average = total / 5.0;
    percentage = (total / 500.0) * 100;

    
    cout << "Total marks = " << fixed << setprecision(3) << total << endl;
    cout << "Average marks = " << fixed << setprecision(3) << average << endl;
    cout << "Percentage = " << fixed << setprecision(3) << percentage << endl;

    return 0;
}