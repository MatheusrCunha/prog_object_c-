#include "relogio.h"

Relogio::Relogio() {}

void Relogio::set_hora(int hh, int mm, int ss) {

    _hora = hh;
    _minuto = mm;
    _segundo = ss;
};

void get_hora(int &h, int &m, int &s) {

    h = _hora;
    m = _minuto;



};

void Relogio::avancar() {


};
