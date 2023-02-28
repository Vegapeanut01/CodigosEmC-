#include <iostream>
#include <climits>
#include <iomanip>
using namespace std;

int main()
{
    int n, i, menores;
    double alturaTotal, alturaMedia, PercentualMenores;

    cout << "Quantas pessoas serao digitadas? ";
    cin >> n;

    string nomes[n];
    int idades[n];
    double alturas[n];

    for(i=0; i<n; i++){
        cout << "Dados da " << i+1 << "a pessoa: " << endl;
        cout << "Nome: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin, nomes[i]);
        cout << "Idade: ";
        cin >> idades[i];
        cout << "Altura: ";
        cin >> alturas[i];
    }

    alturaTotal = 0;

    for(i=0; i<n; i++ ){
        alturaTotal = alturaTotal + alturas[i];
    }

    cout << endl << endl;
    alturaMedia = alturaTotal / n;
    cout << fixed << setprecision(2);
    cout << "Altura media: " << alturaMedia << endl;

    menores = 0;
    for(i=0; i<n; i++){
        if( idades[i] < 16){
            menores++;
        }
    }

    PercentualMenores = menores * 100.0 / n;
    cout << fixed << setprecision(1);
    cout << "Pessoas com menos de 16 anos: " << PercentualMenores << "%" << endl;

    for(i=0; i<n; i++){
        if( idades[i] < 16){
            cout << nomes[i] <<endl;
        }
    }


    return 0;
}
