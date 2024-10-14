#ifndef CONTA_H
#define CONTA_H

class Conta
{
private:

    double saldo;

public:
    Conta()
    {
        saldo=0;
    };
    void creditar(double x);
    void remove(double y);
    double getSal(){
        return saldo;
    };
};

#endif // CONTA_H
