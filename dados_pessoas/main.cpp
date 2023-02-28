#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n, Mulheres;
    double MenorAltura, MaiorAltura, MediaM, alturaM;

    cout << "Quantas pessoas serao digitadas? ";
    cin >> n;

    double alturas[n];
    char genero[n];

    for(int i=0; i<n; i++){
        cout << "Altura da " << i+1 << "a pessoa: ";
        cin >> alturas[i];
        cout << "Genero da " << i+1 << "a pessoa: ";
        cin >> genero[i];
    }

    //menor altura

    MenorAltura = alturas[0];
    for(int i=1; i<n; i++){
        if(alturas[i] < MenorAltura){
            MenorAltura = alturas[i];
        }
    }
    //maior altura
    MaiorAltura = alturas[0];
    for(int i=1; i<n; i++){
        if(alturas[i] > MaiorAltura){
            MaiorAltura = alturas[i];
        }
    }

    //media mulheres
    Mulheres = 0;
    for(int i=0; i<n; i++){
        if(genero[i] == 'F'){
            alturaM = alturaM + alturas[i];
            Mulheres++;
        }
    }
    MediaM = alturaM / Mulheres;

    //saidas

    cout << fixed << setprecision(2) << endl;
    cout << "Menor altura = " << MenorAltura << endl;
    cout << "Maior altura = " << MaiorAltura << endl;
    cout << "Media das alturas das mulheres = " << MediaM << endl;
    cout << "Numero de homens  = " << n - Mulheres << endl;

    return 0;
}
