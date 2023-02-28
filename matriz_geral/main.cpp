#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int n, linha, coluna;
    double soma;

    cout << "Qual a ordem da matriz? ";
    cin >> n;

    //percorrendo
    double mat[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];
        }
    }

    //Soma dos positivos
    soma =0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(mat[i][j] > 0){
                soma = soma + mat[i][j];
            }
        }
    }
    cout << "\n";
    cout << fixed << setprecision(1);
    cout << "SOMA DOS POSITIVOS: " << soma << "\n\n";

    //Escolha de linha
    cout << "Escolha uma linha: ";
    cin >> linha;
    cout << "LINHA ESCOLHIDA: ";
    for(int j=0; j<n; j++){
        cout  << mat[linha][j] << " ";
    }

    cout << "\n\n";
    //Escolha coluna
    cout << "Escolha uma coluna: ";
    cin >> coluna;
    cout << "COLUNA ESCOLHIDA: ";
    for(int i=0; i<n; i++){
        cout  << mat[i][coluna] << " ";
    }

    cout << "\n\n";

    //Diagonal Principal
    cout << "DIAGONAL PRINCIPAL: ";
    for(int i=0; i<n; i++){
        cout << mat[i][i] << " ";
    }
    cout << endl;
    //alterando a matriz

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(mat[i][j] < 0){
                mat[i][j] = pow(mat[i][j],2);
            }
        }
    }
    cout << endl;
    cout << "MATRIZ ALTERADA: " << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
