#include <iostream>

using namespace std;

int main()
{
    int inicio, fim;
    int h1, h2, m1, m2;
    while (true){
    cin >> h1 >> m1 >> h2 >> m2;
    if(h1 + m1 + h2 + m2 == 0){
        break;
    }
    if (h1 == 0)
    {
        inicio = 1440 + m1;
    }
    else
    {
        inicio = (h1 * 60) + m1;
    }
    if (h2 == 0)
    {
        fim = 1440 + m2;
    }
    else
    {
        fim = (h2 * 60) + m2;
    }
    if (fim > inicio)
    {
        cout << fim - inicio << endl;
    }
    else
    {
        cout << 1440 - (inicio - fim) << endl;
    }
    }
    return 0;
}