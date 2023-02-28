#include <iostream>

using namespace std;

int main()
{
    int N, pares;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> N;

    int vet[N];

    for(int i=0; i<N; i++){
        cout << "Digite um numero: ";
        cin >> vet[i];
    }
    cout << endl;
    cout << endl;

    pares = 0;
    cout << "NUMEROS PARES: " << endl;
    for(int i=0; i<N; i++){
        if(vet[i] % 2 == 0){
            cout << vet[i] << " ";
            pares++;
        }

    }

    cout << endl;
    cout << endl;
    cout << "QUANTIDADE DE PARES = " << pares;

    return 0;
}
