#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
    int minutos;
    double plano, valorApagar;

    cout << "Digite a quantidade de minutos: ";
    cin >> minutos;

    plano = 50.00;
    cout << fixed << setprecision(2);
    if(minutos > 100){
        valorApagar = plano + 2 * (minutos - 100);

        cout << "Valor a pagar: R$" << valorApagar;
    }
    else{
        cout << "Valor a pagar: R$" << plano;
    }

    return 0;
}
