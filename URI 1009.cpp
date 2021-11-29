#include <iostream>
 
using namespace std;
 
int main() {

    string name;

    double salario = 0, mVendas = 0, salarioBonus = 0;

    cin >> name;
    cin >> salario;
    cin >> mVendas;

    salarioBonus = salario + (mVendas*0.15);

    cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
    cout.precision(2);
    cout << "TOTAL = R$ " << salarioBonus << "\n";

    return 0;
}