#ifndef RELOGIO_H
#define RELOGIO_H

class Relogio
{
private:

    int _hora;
    int _minuto;
    int _segundo;

public:
    Relogio(int hora, int minuto, int segundo);

    void set_hora(int hh, int mm, int ss);
    int get_hora(int &h, int &m, int &s);
    void tick();
};

#endif // RELOGIO_H
