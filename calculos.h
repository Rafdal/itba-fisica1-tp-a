#include <stdio.h>
#include <math.h>

#ifndef CALCULOS_H
#define CALCULOS_H

double DEV_STD(double data[]); // desviación estandard de 10 valores

double DEV_STD(double data[]) {
    double sum = 0.0, mean, SD = 0.0;

    for (int i = 0; i < 10; ++i) {
        sum += data[i];
    }
    
	mean = sum / 10;
    for (int i = 0; i < 10; ++i) {
        SD += pow(data[i] - mean, 2);
    }
    return sqrt(SD / 10);
}

#endif