#include <iostream>
#include <list>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    list<string> amigos, amigosNovos;
    string nome1, nome2, amigoIndicado;

    getline(cin, nome1);
    stringstream A(nome1);
    while (getline(A, nome2, ' '))
    {
        amigos.push_back(nome2);
    }
    getline(cin, nome1);
    stringstream B(nome1);
    while (getline(B, nome2, ' '))
    {
        amigosNovos.push_back(nome2);
    }
    cin >> amigoIndicado;
    if (amigoIndicado == "nao")
    {
        for (auto i : amigos)
        {
            cout << i << " ";
        }
        for (auto i : amigosNovos)
        {
            if(i != amigosNovos.back())
            {
                cout << i << " ";
            }
            else
            {
                cout << i;
            }
        }
    }
    else
    {
        list<string>::iterator pos;
        for(list<string>::iterator it = amigos.begin(); it != amigos.end(); ++it)
        {
            if(*it == amigoIndicado)
                pos = it;
        }
        for (auto i : amigosNovos)
        {
            amigos.insert(pos, i);
        }
        for (auto i : amigos)
        {
            if (i != amigos.back())
            {
                cout << i << " ";
            }
            else
            {
                cout << i;
            }
        }
    }
    cout << endl;
    return 0;
}