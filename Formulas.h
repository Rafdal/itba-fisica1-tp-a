#include "math.h"

// n = cant monedas
// L = largo a monedas
// e = espesor 10 monedas
// u_L = incerteza instrumental L
// u_
double Incerteza_Angulo(double n, double L, double e, double u_L, double u_e){
    //Derivadas parciales
    double c1,c2;

    //Con respecto a L
    c1 = (1/ sqrt(1- pow((e*n)/(10*L),2))) * (-(e*n)/(10* pow(L,2)));

    //Con respecto a e
    c2 = (1/ sqrt(1- pow((e*n)/(10*L),2))) * (n/(10*L));

    //Incerteza Total

    double Incerteza;

    Incerteza = sqrt( pow(c1*u_L, 2) + pow(c2*u_e,2) );

    return Incerteza;
}

