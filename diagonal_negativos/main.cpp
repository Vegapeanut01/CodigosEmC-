#include <iostream>

using namespace std;

int main()
{
    int i, j, n, negativos;

    cout << "Qual a ordem da matriz? ";
    cin >> n;

    int matriz [n][n];

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> matriz [i][j];
        }
    }

    cout << "DIAGONAL PRINCIPAL: " << endl;
    for(i=0; i<n; i++){
            cout << matriz[i][i] << " ";
        }

    negativos = 0;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(matriz[i][j] < 0){
                negativos++;
            }
        }
    }

    cout << endl;
    cout << "QUANTIDADE DE NEGATIVOS = " << negativos << endl;

    return 0;
}
