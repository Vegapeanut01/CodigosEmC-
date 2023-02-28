#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int N, numerador, denominador;
    double produto;

    cout << "Quantos casos voce vai digitar? ";
    cin >> N;

    cout << fixed << setprecision(2);
    for(int i =0; i<N; i++){
        cout << "Entre com o numerador: ";
        cin >> numerador;
        cout << "Entre com o denominador: ";
        cin >>  denominador;

        if(denominador == 0){
            cout << "DIVISAO IMPOSSIVEL" << endl;
        }
        else{
            produto = (double)numerador / denominador;
            cout << "DIVISAO = " << produto << endl;
        }
    }



    return 0;
}
