#ifndef ELEVADOR_H
#define ELEVADOR_H

class Elevador
{

private:
    int _atual;
    int _total_andares;
    int _capacidade;
    int _pessoas_presentes;

public:
    Elevador(int _t_capacidade, int _andar_inicial);

    void entra();
    void sai();
    void sobe();
    void desce();
    int get_atual();
    int get_total_andares();
    int get_capacidade();
    int get_presentes();
};

#endif // ELEVADOR_H
