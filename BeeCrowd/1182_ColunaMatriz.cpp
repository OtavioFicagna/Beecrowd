#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(){
    const int n = 12;
    int coluna;
    float matriz[n][n], total;
    string operacao;

    cin >> coluna;
    cin >> operacao;

    total = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> matriz[i][j];
        }
    }
    if(operacao == "S"){
        for(int i = 0; i < n; i++){
            total += matriz[i][coluna];
        }
    }
    if(operacao == "M"){
        for(int i = 0; i < n; i++){
            total += matriz[i][coluna];
        }
        total = total/n;
    }
    cout << fixed << setprecision(1) << total << endl;

    return 0;
}