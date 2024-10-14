#ifndef PESSOA_H
#define PESSOA_H

#include <string>

using namespace std;

class Pessoa{
private:
    string _nome;
    int _idade;
    double _altura;

public:
    Pessoa();

    void set_nome(string _nome_novo);
    void set_idade(int _idade_nova);
    void set_altura(double _altura_nova);
    string get_name();
    int get_idade();
    double get_altura();
    void imprimir();
    void imprimirDados();

};

#endif // PESSOA_H
