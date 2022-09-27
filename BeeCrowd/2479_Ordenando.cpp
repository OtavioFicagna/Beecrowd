#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

struct criancas
{
    string nome, comportou;
};

bool cmp(const criancas a1, const criancas a2){
    return a1.nome < a2.nome;
}

int main() {
    int n, sc = 0, nc = 0;
    criancas aux;
    vector <criancas> lista;
    cin >> n;
    while(n-- > 0)
    {
        cin >> aux.comportou >> aux.nome;
        lista.push_back(aux); 
        if(aux.comportou == "+"){
            sc++;
        }
        if(aux.comportou == "-"){
            nc++;
        }
    }
    sort(lista.begin(), lista.end(), cmp);
    for(auto n : lista){
        cout << n.nome << endl;
    }
    cout << "Se comportaram: " << sc << " | Nao se comportaram: " << nc << endl;

    return 0;
}