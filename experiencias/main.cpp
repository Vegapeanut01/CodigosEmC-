#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int N, cobaia, qtdC, qtdR, qtdS, total;
    char Tipocobaia;
    double Pcoelhos, Pratos, Psapos;

    cout << "Quantos casos de teste serao digitados? ";
    cin >> N;


    qtdC = 0;
    qtdR = 0;
    qtdS = 0;
    for(int i=0; i<N; i++){
        cout << "Quantidade de cobaias: ";
        cin >> cobaia;
        cout << "Tipo de cobaia: ";
        cin >> Tipocobaia;

        switch (Tipocobaia){
        case 'C':
            qtdC = qtdC + cobaia;
            break;
        case 'R':
            qtdR = qtdR + cobaia;
            break;
        case 'S':
            qtdS = qtdS + cobaia;
            break;
        }

    }
    //calculo do total e do percentual
    total = qtdC + qtdR + qtdS;
    Pcoelhos = ((double)qtdC / total) * 100;
    Pratos = ((double) qtdR / total) * 100;
    Psapos = ((double)qtdS / total) * 100;

    cout << endl;
    cout << endl;
    //impressao
    cout << fixed << setprecision(2);
    cout << "RELATORIO FINAL: " << endl;
    cout << "Total: " << total << endl;
    cout << "Total de coelhos: " << qtdC << endl;
    cout << "Total de ratos: " << qtdR << endl;
    cout << "Total de sapos: " << qtdS << endl;

    cout << "Percentual de coelhos: " << Pcoelhos << endl;
    cout << "Percentual de ratos: " << Pratos << endl;
    cout << "Percentual de sapos: " << Psapos << endl;


    return 0;
}
