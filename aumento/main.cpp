#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double salario, novoSalario, aumento;
    int porcentagem;

    cout << "Digite o salario da pessoa: ";
    cin >> salario;

    cout << fixed << setprecision(2);
    if( salario <= 1000.00){
        porcentagem = 20;
        aumento = salario * porcentagem / 100;
        novoSalario = salario + aumento;
    }
    else if( salario <= 3000.00){
        porcentagem = 15;
        aumento = salario * porcentagem / 100;
        novoSalario = salario + aumento;
    }
    else if(salario <= 8000.00){
        porcentagem = 10;
        aumento = salario * porcentagem / 100;
        novoSalario = salario + aumento;

    }
    else{
        porcentagem = 5;
        aumento = salario * porcentagem / 100;
        novoSalario = salario + aumento;
    }

    cout << "Novo salario = R$ " << novoSalario << endl;
    cout << "Aumento = R$ " << aumento << endl;
    cout << "porcentagem = "<< porcentagem << "%" << endl;

    return 0;
}
