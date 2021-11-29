#include <iostream>
 
using namespace std;
 
int main() {

    int funcNum = 0, workedHours = 0;

    double salary = 0, gHora = 0;

    cin >> funcNum;
    cin >> workedHours;
    cin >> gHora;

    salary = gHora * workedHours;

    cout << "NUMBER = " << funcNum << "\n";
    cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
    cout.precision(2);
    cout << "SALARY = U$" << salary << "\n";

    return 0;
}