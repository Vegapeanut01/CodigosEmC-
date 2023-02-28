#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int N, pares, soma;
    double media;

    cout << "Quantos elementos vai ter o vetor? ";
    cin >> N;

    int vet[N];

    for(int i=0; i<N; i++){
        cout << "Digite um numero: ";
        cin >> vet[i];
    }

    soma = 0;
    pares = 0;
    for(int i=0; i<N; i++){
        if(vet[i] % 2 == 0){
            soma = soma + vet[i];
            pares++;
        }
    }

    if(pares != 0){
        media = (double)soma / pares;
        cout << fixed << setprecision(1);
        cout << "MEDIA DOS PARES = " << media;
    }
    else{
        cout << "NENHUM NUMERO PAR";
    }


    return 0;
}
