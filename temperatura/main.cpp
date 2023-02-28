#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double C, F;
    char letra;

    cout << "Voce vai digitar a temperatura em qual escala (C/F)? ";
    cin >> letra;

    cout << fixed << setprecision(2);

    if(letra == 'F' ){
        cout << "Digite a temperatura em Fahrenheit: ";
        cin >> F;

        C = 5.0 / 9.0 * (F - 32.0);
        cout << "Temperatura equivalente em Celsius: " << C << endl;
    }
    else{
       cout << "Digite a temperatura em Celsius: ";
        cin >> C;

        F = C * 9.0 / 5.0 + 32.0;
        cout << "Temperatura equivamente em Fahrenheit: " << F << endl;
    }

    return 0;
}

