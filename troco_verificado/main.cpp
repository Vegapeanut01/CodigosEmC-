#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int qtd;
    double Punitario, Dinheiro, troco, total;

    cout << "Preco unitario do produto: ";
    cin >> Punitario;
    cout << "Quantidade comprada: ";
    cin >> qtd;
    cout << "Dinheiro recebido: ";
    cin >> Dinheiro;

    total = Punitario * qtd;
    troco = Dinheiro - total;

    cout << fixed << setprecision(2);
    if(total > Dinheiro){
        cout << "DINHEIRO INSUFISIENTE. FALTAM " << (total - Dinheiro) << " REAIS";
    }
    else{
        cout << "TROCO = " << troco;
    }


    return 0;
}
