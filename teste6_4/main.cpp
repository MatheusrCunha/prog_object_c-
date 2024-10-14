#include <iostream>
#include "conta.h"

using namespace std;

int main()
{

    //double deposito;

    Conta c1, c2;

    cout << "\nSaldo da C/C1 = " << c1.getSal();
    cout << "\nSaldo da C/C2 = " << c2.getSal();

    c1.creditar(1500);
    cout << "\nSaldo da C/C1 apos credito = " << c1.getSal();
    c1.remove(500);

    cout << "\nSaldo da C/C1 apos credito = " << c1.getSal();
    return 0;

}
