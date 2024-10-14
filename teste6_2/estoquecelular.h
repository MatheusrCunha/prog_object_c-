#ifndef ESTOQUECELULAR_H
#define ESTOQUECELULAR_H

class estoqueCelular
{

private:
    int codigoFabricante;
    int codigoModelo;
    double custo;
public:
    void setDados(int _fabricante, int _modelo, double _custo);
    void mostraDados();
};

#endif // ESTOQUECELULAR_H
