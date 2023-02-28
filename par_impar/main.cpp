#include <iostream>

using namespace std;

int main()
{
    int N, x, i;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> N;

    for(i=0; i<N; i++){
        cout << "Digite um numero: ";
        cin >> x;

        if(x == 0){
            cout << "NULO" << endl;
        }
        else{
            if( x % 2 == 0){
                cout << "PAR";
            }
            else{
                cout << "IMPAR";
            }

            if(x > 0){
                cout << " POSITIVO" << endl;
            }
            else{
                cout << " NEGATIVO" << endl;
            }
        }


    }
    return 0;
}
