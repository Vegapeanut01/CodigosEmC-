#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int N, posicao;
    double maior;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> N;

    double vet[N];

    for(int i=0; i<N; i++){
        cout << "Digite um numero: ";
        cin >> vet[i];
    }

    maior = vet[0];

    for(int i=0; i<N; i++){
        if(vet[i] > maior){
            maior = vet[i];
            posicao = i;
        }
    }
    cout << "\n\n";

    cout << fixed << setprecision(1);
    cout << "MAIOR VAL0R = " << maior << endl;
    cout << "POSICAO DO MAIOR VALOR =  " << posicao << endl;



    return 0;
}
