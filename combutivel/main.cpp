#include <iostream>

using namespace std;

int main()
{
    int alcool, gasolinal, diesel, x;

    cout << "Informe um codigo (1, 2, 3) ou 4 para parar: ";
    cin >> x;

    alcool = 0;
    gasolinal = 0;
    diesel = 0;

    while( x != 4){
        cout << "Informe um codigo (1, 2, 3) ou 4 para parar: ";
        cin >> x;

        switch(x){
            case 1:
                alcool++;
                break;

            case 2:
                gasolinal++;
                break;

            case 3:
                diesel++;
                break;

        }

    }

    cout << "MUITO OBRIGADO!" << endl;
    cout << "Alcool: " << alcool << endl;
    cout << "Gasolina: " << gasolinal << endl;
    cout << "Diesel: " << diesel << endl;



    return 0;
}
