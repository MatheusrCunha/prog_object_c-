#include <iostream>
#include "elevador.h"

using namespace std;

int main()
{

    Elevador elevador(5, 10); //objeto do tipo Elevador

    //Elevador* e1 = new Elevador();

    cout << "Andar atual: " << elevador.get_atual() << endl;
    cout << "Pessoas no elevador: " << elevador.get_presentes() << endl;

    elevador.entra();
    elevador.sobe();

    cout << "Entrar: " << elevador.get_presentes() << endl;
    cout << "andar: " << elevador.get_atual() << endl;
    cout << "Capacidade: " << elevador.get_capacidade() << endl;

    elevador.desce();
    elevador.sai();
    cout << "desce: " << elevador.get_atual() << endl;
    cout << "sai: " << elevador.get_capacidade() << endl;


    return 0;
}
