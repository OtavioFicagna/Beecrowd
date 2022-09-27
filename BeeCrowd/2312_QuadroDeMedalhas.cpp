#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct paises
{
    string pais;
    int ouro, prata, bronze;
};

bool cmp(const paises &p1, const paises &p2)
{
    return (p1.ouro > p2.ouro) ||
           (p1.ouro == p2.ouro && p1.prata > p2.prata) ||
           (p1.ouro == p2.ouro && p1.prata == p2.prata && p1.bronze > p2.bronze) ||
           (p1.ouro == p2.ouro && p1.prata == p2.prata && p1.bronze == p2.bronze && p1.pais < p2.pais);
}

int main()
{
    vector<paises> lista;
    paises aux;
    int n;
    cin >> n;
    while (n-- > 0)
    {
        cin >> aux.pais >> aux.ouro >> aux.prata >> aux.bronze;
        lista.push_back(aux);
    }
    sort(lista.begin(), lista.end(), cmp);
    for (auto p : lista)
    {
        cout << p.pais << " " << p.ouro << " " << p.prata << " " << p.bronze << endl;
    }

    return 0;
}