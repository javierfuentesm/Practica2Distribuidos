#include <iostream>
#include "Fecha.h"

using namespace std;


int main()
{
    Fecha a, b, c(21, 9, 1973);

    b.inicializaFecha(17, 6 , 2000);
    a.muestraFecha();
    b.muestraFecha();
    c.muestraFecha();
    c.convierte(4,2,2020);
    if(c.leapyr(2400)){
        cout << "Es bisiesto";
    }

}