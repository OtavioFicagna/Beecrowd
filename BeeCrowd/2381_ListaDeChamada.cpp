#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

struct aluno
{
    string nome;
};

bool cmp(const aluno a1, const aluno a2){
    return a1.nome < a2.nome;
}

int main() {
  int n, k;
  vector <aluno> lista;
  aluno nome;

  cin >> n >> k;
  while(n-- > 0){
    cin >> nome.nome;
    lista.push_back(nome);
  }
  sort(lista.begin(), lista.end(), cmp);
  cout << lista[(k-1)].nome << endl;
  return 0;
}