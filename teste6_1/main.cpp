#include <iostream>
#include "minhaclasse.h"

using namespace std;

int main()
{
    minhaClasse obj1, obj2; // declaracao de 2 objetos

    obj1.setValor(11);
    obj1.mostraValor();

    obj2.setValor(12);
    obj2.mostraValor();

    cout << endl;
    return 0;
}
