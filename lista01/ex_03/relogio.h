#ifndef RELOGIO_H
#define RELOGIO_H

class Relogio
{

private:

    int _hora;
    int _minuto;
    int _segundo;

public:
    Relogio();

    void set_hora(int hh, int mm, int ss);
    void get_hora();
    void avancar();
};

#endif // RELOGIO_H
