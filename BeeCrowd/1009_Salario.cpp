#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double salarioFixo, montanteTotal, total; 
    string nome;
    cin >> nome;
    cin >> salarioFixo;
    cin >> montanteTotal;
    total = salarioFixo + (montanteTotal*0.15);
    cout << fixed << setprecision(2) << "TOTAL = R$ " << total << endl;
    
    return 0;

}