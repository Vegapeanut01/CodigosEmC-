#include <iostream>

using namespace std;

int main()
{
    int x, i, produto;

    cout << "Deseja a tabuada para qual valor? ";
    cin >> x;

    for(i=1; i <= 10; i++){
        produto = x * i;
        cout << x << " X " << i << " = " << produto << endl;
    }

    return 0;
}
