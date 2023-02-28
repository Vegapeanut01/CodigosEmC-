#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i, j, m, n, somalinha;


    cout << "Qual a quantidade de linhas da matriz? ";
    cin >> m;
    cout << "Qual a quantidade de colunas da matriz? ";
    cin >> n;

    double mat[m][n];
    double vet[m];

    for(i=0; i<m; i++){
        cout << "Digite os elementos da " << i+1 << "a. linha: \n";
        for(j=0; j<n; j++){
            cin >> mat[i][j];
        }
    }

    //percorrendo o vetor
    for(i=0; i<m; i++){
        vet[i] = 0;
        for(j=0; j<n; j++){
            vet[i] = vet[i] + mat[i][j];
        }

    }

    cout << "VETOR GERADO:" << endl;
    for(i=0; i<m; i++){
        cout << fixed << setprecision(1);
        cout << vet[i] << endl;
    }


    return 0;
}
