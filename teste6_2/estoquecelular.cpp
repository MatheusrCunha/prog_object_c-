#include "estoquecelular.h"
#include <iostream>

using namespace std;


void estoqueCelular::setDados(int x, int y, double z)
{
    codigoFabricante = x;
    codigoModelo = y;
    custo = z;
}


void estoqueCelular::mostraDados()
{
    cout << "\nCodigo do fabricante = " << codigoFabricante;
    cout << "\nCodigo do modelo = " << codigoModelo;
    cout << "\nCusto do aparelho: R$ " << custo;
    cout << endl;
}
