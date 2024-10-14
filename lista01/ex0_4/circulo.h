#ifndef CIRCULO_H
#define CIRCULO_H

#include <cmath>

class Circulo
{

private:

    double _raio;
    double x, y;

    double area_circulo(double raio, double _pi);
    double dois_centros(double raio);
    double circ_circulo(double raio);

public:
    Circulo();

    void aumentar_raio(double raio);
    void imprimir_raio(double raio);
    void imprimir_centro();
    void imprimir_area();

};

#endif // CIRCULO_H
