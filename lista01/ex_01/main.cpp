#include <iostream>
#include "pessoa.h"

using namespace std;

int main()
{
    Pessoa p1;

    p1.set_nome("matheus");
    p1.set_altura(1.70);
    p1.set_idade(27);

    cout << "\nNome: " << p1.get_name() << " altura: " << p1.get_altura() << " idade: " << p1.get_idade() << endl;

    return 0;
}
