#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Fecha.h"

using namespace std;
int masVieja(int fecha1, int fecha2){
    if(fecha1<fecha2)
        return 1;
    else if(fecha1==fecha2)
        return 0;
    else
        return -1;
}

/*
int masVieja(Fecha &fecha1, Fecha& fecha2){
    if(*fecha1<*fecha2)
        return 1;
    else if(*fecha1==*fecha2)
        return 0;
    else
        return -1;
}*/

int main()
{
    Fecha a, b,prueba,prueba2, c(21, 9, 1973);

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
    int n=20;
    clock_t start = clock();
    srand(time(NULL));
    for(int i=0;i<n;i++){
        int randomYear1 = (rand()%999)+1020;
        int randomMonth1 = (rand()%12)+1;
        int randomDays1 = (rand()%30)+1;
        int randomYear2 = (rand()%999)+1020;
        int randomMonth2 = (rand()%12)+1;
        int randomDays2 = (rand()%30)+1;

        cout << masVieja(prueba.convierte(randomDays1,randomMonth1,randomYear1),prueba2.convierte(randomDays2,randomMonth2,randomYear2)) << endl;
    }
    clock_t stop = clock();
    double elapsed = (double) (stop - start) / CLOCKS_PER_SEC;
    printf("\nTime elapsed: %.5f\n", elapsed);
    return 0;

}