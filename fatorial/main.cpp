#include <iostream>

using namespace std;

int main()
{
   int N, fatorial;

   cout << "Digite o valor de N: ";
   cin >> N;

    fatorial = 1;
   for(int i = 1; i <=N ; i++){
    fatorial = fatorial * i;
   }

   cout << "FATORIAL = " << fatorial;


    return 0;
}
