#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    int r, w, l;
    int i = 1;
    while (true)
    {
        cin >> r;
        if (r == 0)
        {
            break;
        }
        cin >> w >> l;
        float diagonal = sqrt((w * w) + (l * l));
        if (diagonal > (r * 2))
        {
            cout << "Pizza " << i << " does not fit on the table." << endl;
        }
        else
        {
            cout << "Pizza " << i << " fits on the table." << endl;
        }
        i++;
    }

    return 0;
}