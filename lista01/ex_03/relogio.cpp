#include "relogio.h"
#include <chrono>

using namespace std;

Relogio::Relogio(int hora, int minuto, int segundo): _hora(hora), _minuto(minuto), _segundo(segundo) {}

void Relogio::set_hora(int hh, int mm, int ss) {

    _hora = hh;
    _minuto = mm;
    _segundo = ss;
};

int get_hora(int &h, int &m, int &s) {


    auto agora = std::chrono::system_clock::now();
    time_t tempoAtual = std::chrono::system_clock::to_time_t(agora);
    tm* tmLocal = std::localtime(&tempoAtual); // Converte para a hora local

    h = tmLocal->tm_hour;
    m = tmLocal->tm_min;
    s = tmLocal->tm_sec;

    return tempoAtual;

};

void Relogio::tick() {



};
