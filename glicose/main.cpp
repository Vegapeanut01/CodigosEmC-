#include <iostream>

using namespace std;

int main()
{
    int glicose;

    cout << "Digite a medida da glicose: ";
    cin >> glicose;

    if(glicose <= 100.00){
        cout << "Classificacao: normal";
    }
    else if(glicose <= 140.00){
        cout << "Classificacao: elevado ";
    }
    else{
        cout << "Classificacao: diabetes ";
    }


    return 0;
}
