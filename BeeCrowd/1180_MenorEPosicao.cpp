#include <iostream>

using namespace std;

int main(){
    int vetor;
    cin >> vetor;
    int N[vetor];
    for(int i = 0; i < vetor; i++){
        cin >> N[i];
    }
    int menor, pos;
    menor = 1000;
    for(int i = 0; i < vetor; i++){
        if(N[i] < menor){
            menor = N[i];
            pos = i;
        }
    }
    cout << "Menor valor: " << menor << endl << "Posicao: " <<  pos << endl;
    return 0;
}