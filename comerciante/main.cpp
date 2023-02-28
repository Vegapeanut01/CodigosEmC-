#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n, abaixo, entre, acima;
    double totalCompra, totalVenda, percentual, lucro;

    cout << "Serao digitados dados de quantos produtos? ";
    cin >> n;

    double PV[n], PC[n];
    string PDT[n];

    for(int i=0; i<n; i++){
        cout << "Produto " << i+1 << ":" << endl;
        cout << "Nome: ";
        cin >> PDT[i];
        cout << "Preco de compra: ";
        cin >> PC[i];
        cout << "Preco de venda: ";
        cin >> PV[i];
    }

    //total compra
    for(int i=0; i<n; i++){
        totalCompra = totalCompra + PC[i];
    }
    //total venda
    for(int i=0; i<n; i++){
        totalVenda = totalVenda + PV[i];
    }
    //percentuais
    abaixo = 0;
    entre = 0;
    acima = 0;

    for(int i=0; i<n; i++){
        lucro = PV[i] - PC[i];
        percentual = lucro * 100 / PC[i];

        if(percentual < 10.0){
            abaixo++;
        }
        else if(percentual >= 10 && percentual <= 20){
            entre++;
        }
        else{
            acima++;
        }

    }

    //impressao
    cout << "\n\n";
    cout << "RELATORIO: " << endl;
    cout << "Lucro abaixo de 10%: " << abaixo << endl;
    cout << "Lucro entre 10% e 20%: " << entre << endl;
    cout << "Lucro acima de 20%: " << acima << endl;
    cout << fixed << setprecision(2);
    cout << "Valor total de compra: " << totalCompra << endl;
    cout << "Valor totla de venda: " << totalVenda << endl;
    cout << "Lucro total: " << totalVenda - totalCompra << endl;


    return 0;
}

//lucro = preco de venda - preco de compra
// percentual = lucro / preco de compra;
