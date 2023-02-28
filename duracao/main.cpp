#include <iostream>

using namespace std;

int main()
{
    int DuracaoSegundos, horas, minutos, segundos, resto;

    cout << "Digite a duracao em segundos: ";
    cin >> DuracaoSegundos;

    horas = DuracaoSegundos / 3600;
    resto = DuracaoSegundos % 3600;
    minutos = resto / 60;
    segundos = resto % 60;

    cout <<  horas << ":" << minutos << ":" << segundos;

    return 0;
}
