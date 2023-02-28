#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int horas;
    double valorHora, pagamento;
    string nome;

    cout << "Nome: ";
    getline(cin , nome);
    cout << "Valor por hora: ";
    cin >> valorHora;
    cout << "Horas trabalhadas: ";
    cin >> horas;

    pagamento = valorHora * horas;
    cout << fixed << setprecision(2);
    cout << "O pagamento para " << nome << " deve ser R$ " << pagamento << endl;

    return 0;
}
