#include <iostream>

using namespace std;

int main()
{
    int m,n;

    cout << "Quantas linhas vai ter cada matriz? ";
    cin >>m;
    cout << "Quantas colunas vai ter cada matriz? ";
    cin >> n;

    int matrizA[m][n], matrizB[m][n], matrizC[m][n];

    //matrizA
    cout << endl;
    cout << "Digite os valores da matriz A: \n";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> matrizA[i][j];
        }
    }

    //matrizB
    cout << endl;
    cout << "Digite os valores da matriz B: \n";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> matrizB[i][j];
        }
    }

    //matrizC
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    //impressao
    cout << endl;
    cout << "MATRIZ SOMA:" << endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << matrizC[i][j] << " ";
        }
        cout << endl;
    }



    return 0;
}
