#include "elevador.h"
#include <iostream>

using namespace std;


Elevador::Elevador(int capacidade, int totalandares): _total_andares(totalandares), _capacidade(capacidade) {}

void Elevador::entra(){

    if(_pessoas_presentes < _capacidade){
        _pessoas_presentes++;
    }
    else{
        cout << "\nElevador Ficou cheio " << endl;
    }

}

void Elevador::sai(){

    if(_pessoas_presentes > 0){
        _pessoas_presentes--;
        _capacidade++;
    }
    else{
        cout << "\nElevador Vazio " << endl;
    }
};

void Elevador::desce(){

    if(_atual > 0){
        _atual--;
    }
    else{
        cout << "\nElevador no terreo " << endl;
    }
}

void Elevador::sobe(){

    if(_atual < _total_andares){
        _atual++;
        _capacidade--;
    }
    else{
        cout << "\nElevador no ultimo andar " << endl;
    }
}

int Elevador::get_atual(){

    return _atual;
};

int Elevador::get_total_andares(){

    return _total_andares;

};

int Elevador::get_capacidade(){

    return _capacidade;
};

int Elevador::get_presentes() { // Corrigido para incluir 'Elevador::'
    return _pessoas_presentes;
}

