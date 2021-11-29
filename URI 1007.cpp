#include <iostream>
 
using namespace std;
 
int main() {

    int n1 = 0, n2 = 0, n3 =0, n4 =0, sum = 0;

    cin >> n1;
    cin >> n2;
    cin >> n3;
    cin >> n4;
    
    sum = ((n1*n2)-(n3*n4));

    cout << "DIFERENCA = " << sum << "\n";

    return 0;
}