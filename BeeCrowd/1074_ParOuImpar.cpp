#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

string parImpar(int a){
    if((a%2) == 0){
        return "EVEN";
    }
    else{
        return "ODD";
    }
}

string maiorMenor(int a){
    if(a < 0){
        return "NEGATIVE";
    }
    else{
        return "POSITIVE";
    }
        
}

int main(){
    int qtdTestes, caso;
    cin >> qtdTestes;
    for(int i = qtdTestes; i > 0; i--){
        cin >> caso;
        if(caso != 0){
            cout << parImpar(caso) << " " << maiorMenor(caso) << endl;
        }
        else{
            cout << "NULL" << endl;
        }

    }

    return 0;
}