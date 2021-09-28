#include <stdio.h>
#include <math.h>
#include "datos.h"

#ifndef CALCULOS_H
#define CALCULOS_H

double PROM(medicion_t data);
double DEV_STD(medicion_t data); // desviación estandard de 10 valores

double PROM(medicion_t data)
{
	double sum=0.0;
	for (int i = 0; i < 10; ++i) {
        sum += data[i];
    }
    
	return (sum / 10);
}

double DEV_STD(medicion_t data) {
    double mean = PROM(data); 
	double SD = 0.0;
    
    for (int i = 0; i < 10; ++i) {
        SD += pow(data[i] - mean, 2);
    }
    return sqrt(SD / 10);
}

// Hipotenusa
double hypo(double a, double b)
{
	return sqrt(pow(a,2) + pow(b,2));
}

#endif