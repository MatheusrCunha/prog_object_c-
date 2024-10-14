#include "conta.h"


void Conta::creditar(double x){

    saldo = saldo + x;

}
void Conta::remove(double y){

    saldo = saldo - y;
};
