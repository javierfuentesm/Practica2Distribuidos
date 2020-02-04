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
    int contador=0;


    for (int i = 0; i <2020; ++i) {
        if(c.leapyr(i)){
            contador++;
        }
    }
    cout << "Tenemos "<< contador << " Años bisisestos";

}