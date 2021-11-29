#include <iostream>
 
using namespace std;
 
int main() {

    double n1 = 0, n2 = 0, sum = 0;

    cin >> n1;
    cin >> n2;
    
    sum = ((n1*3.5)+(n2*7.5))/11;

    cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
    cout.precision(5);
    cout << "MEDIA = " << sum << "\n";

    return 0;
}