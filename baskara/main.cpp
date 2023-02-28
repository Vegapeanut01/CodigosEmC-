#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double A, B, C, x1, x2, delta;

    cout << "Coeficiente a: ";
    cin >> A;
    cout << "Coeficiente b: ";
    cin >> B;
    cout << "Coeficiente c: ";
    cin >> C;

    delta = pow(B,2) - 4 * A * C;

    if(delta < 0){
      cout << "Essa equacao nao possui raizes reais";
    }
    else{
        x1 = ((-B) + sqrt(delta)) / (2*A);
        x2 = ((-B) - sqrt(delta)) / (2*A);
        cout << fixed << setprecision(4);
        cout << "X1 = " << x1 << endl;
        cout << "X2 = " << x2 << endl;
    }
    return 0;
}
