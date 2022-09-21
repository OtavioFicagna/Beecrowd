#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int main(){
    float total;
    int cod, qtd;

    cin >> cod >> qtd;

    if(cod == 1){
        total = qtd*4;
    }
    if(cod == 2){
        total = qtd*4.50;
    }
    if(cod == 3){
        total = qtd*5;
    }
    if(cod == 4){
        total = qtd*2;
    }
    if(cod == 5){
        total = qtd*1.50;
    }
    cout << fixed << setprecision(2) << "Total: R$ " << total << endl;

    return 0;
}