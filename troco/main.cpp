#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int qtd;
    double PrecoP, Dinheiro, troco, Total;



    cout << "Preco unitario do produto: ";
    cin >> PrecoP;
    cout << "Quantidade comprada: ";
    cin >> qtd;
    cout << "Dinheiro recebido: ";
    cin >> Dinheiro;

    Total = PrecoP * qtd;
    troco = Dinheiro - Total;

    cout << fixed << setprecision(2);
    cout << "TROCO = " << troco << endl;

    return 0;
}
