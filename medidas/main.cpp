#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double A, B, C, AreaQ, AreaT, AreaTRA;

    cout << "Digite a medida A: ";
    cin >> A;
    cout << "Digite a medida B: ";
    cin >> B;
    cout << "Digite a medida C: ";
    cin >> C;

    AreaQ = pow(A,2);
    AreaT = A * B / 2 ;
    AreaTRA = (A + B) * C / 2 ;

    cout << fixed << setprecision(4);
    cout << "AREA DO QUADRADO = " << AreaQ << endl;
    cout << "AREA DO TRIANGULO = " << AreaT << endl;
    cout << "AREA DO TRAPEZIO = " << AreaTRA << endl;

    return 0;
}
