#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int distancia;
    double combustivel, consumo;

    cout << "Distancia percorrida: ";
    cin >> distancia;
    cout << "Combutivel gasto: ";
    cin >> combustivel;

    consumo = distancia / combustivel;

    cout << fixed << setprecision(3);
    cout << "Consumo medio = " << consumo;


    return 0;
}
