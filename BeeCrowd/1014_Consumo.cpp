#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int main(){
    int x;
    float y;
    cin >> x >> y;
    float consumoTotal = x/y;
    cout << fixed << setprecision(3) << consumoTotal << " km/l" << endl;
    return 0;
}