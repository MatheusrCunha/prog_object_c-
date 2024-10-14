
#include "pessoa.h"
#include <iostream>
#include <string>
using namespace std;

Pessoa::Pessoa() {



}

void Pessoa::set_nome(string nome_novo) {

    _nome = nome_novo;

}

void Pessoa::set_altura(double altura_nova) {

    _altura  = altura_nova;

}

void Pessoa::set_idade(int idade_nova) {

    _idade = idade_nova;
}

int Pessoa::get_idade() {

    return _idade;
}

double Pessoa::get_altura() {

    return _altura;
}

string Pessoa::get_name() {

    return _nome;
}
void Pessoa::imprimir() {

    cout << "Nome: " << _nome << endl;
    cout << "Idade: " << _idade << " anos" << endl;
    cout << "Altura: " << _altura << " metros" << endl;
}
