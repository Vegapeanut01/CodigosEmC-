#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double nota1, nota2, media;

    cout << "Digite a primeira nota: ";
    cin >> nota1;

    while (nota1 < 0 || nota1 > 10.0){
        cout << "Valor invalido! Tente novamente: ";
        cin >> nota1;
    }

    cout << "Digite a segunda nota: ";
    cin >> nota2;

    while (nota1 < 0 || nota2 > 10.0){
        cout << "Valor invalido! Tente novamente: ";
        cin >> nota2;
    }

    media = (nota1 + nota2) / 2;

    cout << fixed << setprecision(2);
    cout << "MEDIA = " << media;

    return 0;
}
