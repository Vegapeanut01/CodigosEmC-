#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int N;
    double media, soma;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> N;

    double vet[N];

    for(int i=0; i<N; i++){
        cout << "Digite um numero: ";
        cin >> vet[i];
    }
    cout << endl;
    cout << endl;

    cout << fixed << setprecision(1);
    cout << "VALORES = ";
    for(int i=0; i<N; i++){
        cout << vet[i] << " ";
    }

    soma = 0;
    for(int i=0; i<N; i++){
        soma = soma + vet[i];
    }

    media = (double)soma / N;

    cout << fixed << setprecision(2) << endl;
    cout << "SOMA = " << soma << endl;
    cout << "MEDIA = " << media;



    return 0;
}
