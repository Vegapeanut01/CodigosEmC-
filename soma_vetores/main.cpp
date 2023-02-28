#include <iostream>

using namespace std;

int main()
{
    int N;

    cout << "Quantos valores vai ter cada vetor? ";
    cin >> N;

    int vetA[N], vetB[N], vetC[N];

    //primeiro vetor
    cout << "Digite os valores do vetor A:" << endl;
    for(int i=0; i<N; i++){
        cin >> vetA[i];
    }
    //segundo vetor
    cout << "Digite os valores do vetor B:" << endl;
    for(int i=0; i<N; i++){
        cin >> vetB[i];
    }

    //vetor de soma
    for(int i=0; i<N; i++){
        vetC[i] = vetA[i] + vetB[i];
    }

    cout << "VETOR RESULTANTE: " << endl;
    for(int i=0; i<N; i++){
        cout << vetC[i] << endl;
    }


    return 0;
}
