#include "Fecha.h"
#include <iostream>
using namespace std;


Fecha:: Fecha(int dd, int mm, int aaaa){
    mes = mm;
    dia = dd;
    anio = aaaa;
}

void Fecha::inicializaFecha(int dd, int mm, int aaaa){
    anio = aaaa;
    mes = mm;
    dia = dd;
    return;
}

void Fecha::muestraFecha()
{
    cout << "La fecha es(dia-mes-año): " << dia << "-" << mes << "-" << anio << endl;
    return;
}

int Fecha::convierte(int dd, int mm, int aaaa) {
    int fconvertida = aaaa*1000+mm*100+dd;
    return fconvertida;


}

bool Fecha::leapyr(int anio) {
    if(anio%4==0 && (anio%100!=0 || anio%400==0))
        return true;
    else
        return false;
}