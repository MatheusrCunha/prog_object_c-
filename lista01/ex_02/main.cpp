#include <iostream>
#include "elevador.h"

using namespace std;

int main()
{

    Elevador elevador(5, 10); // Capacidade de 5 pessoas, 10 andares no total (excluindo o térreo)

    elevador.entra();
    elevador.sobe();
    elevador.sobe();
    elevador.desce();

    std::cout << "Andar atual: " << elevador.get_atual() << std::endl;
    std::cout << "Pessoas no elevador: " << elevador.get_presentes() << std::endl;



    return 0;
}
