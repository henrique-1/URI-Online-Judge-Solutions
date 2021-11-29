#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {

    double area = 0;
    double n = 3.14159;
    double raio = 0;

    cin >> raio;

    area = n*pow(raio, 2);
    
    cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
    cout.precision(4);
    cout << "A=" << area << "\n";

    return 0;
}