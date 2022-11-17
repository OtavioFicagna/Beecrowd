#include <list>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    list<char> caracteres;
    list<char>::iterator it;
    string texto;

    while (cin >> texto)
    {
        int i = 0;
        caracteres.clear();
        it = caracteres.begin();
        while (texto[i] != '\0')
        {
            if (texto[i] == ']')
            {
                it = caracteres.end();
            }
            else if (texto[i] == '[')
            {
                it = caracteres.begin();
            }

            if (texto[i] != '[' && texto[i] != ']')
            {
                caracteres.insert(it, texto[i]);
            }
            i++;
        }

        for (it = caracteres.begin(); it != caracteres.end(); it++)
        {
            cout << *it;
        }

        cout << endl;
    }

    return 0;
}