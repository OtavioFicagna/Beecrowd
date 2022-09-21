#include <iostream>

using namespace std;

int main(){
    int t, n;
    long long fibo[61];
    fibo[0] = 0;
    fibo[1] = 1;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n;
        for(int j = 2; j <= n; j++){
            fibo[j] = fibo[j-2] + fibo[j-1];
        }
        cout << "Fib(" << n << ") = " << fibo[n] << endl;
    }

}