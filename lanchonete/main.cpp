#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int codigo, qtd;
    double valorApagar;

    cout << "Codigo do produto comprado: ";
    cin >> codigo;
    cout << "Quantidade comprada: ";
    cin >>  qtd;

    switch (codigo){
    case 1:
        valorApagar = qtd * 5.00;
        break;

    case 2:
        valorApagar = qtd * 3.50;
        break;

    case 3:
        valorApagar = qtd * 4.80;
        break;

    case 4:
        valorApagar = qtd * 8.90;
        break;

    case 5:
        valorApagar = qtd * 7.32;
        break;
    }

    cout << fixed << setprecision(2);
    cout << "Valor a pagar: R$ " << valorApagar <<  endl;


    return 0;
}
