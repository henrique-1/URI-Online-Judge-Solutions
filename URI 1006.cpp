#include <iostream>
 
using namespace std;
 
int main() {

    double n1 = 0, n2 = 0, n3 =0, sum = 0;

    cin >> n1;
    cin >> n2;
    cin >> n3;
    
    sum = ((n1*2)+(n2*3)+(n3*5))/10;

    cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
    cout.precision(1);
    cout << "MEDIA = " << sum << "\n";

    return 0;
}