#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int x, qtd;
    double media, soma;

    cout << "Digite as idades: \n";
    cin >>x ;

    qtd = 0;
    if (x < 0){
        cout << "IMPOSSIVEL CALCULAR" << endl;
    }
    else {
        while (x > 0){
           soma = soma + x;
           cin >> x;
           qtd++;
        }

        media = soma / qtd;
        cout << fixed << setprecision(2);
        cout << "MEDIA = " << media << endl;
    }



    return 0;
}
