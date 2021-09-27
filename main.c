#include <stdio.h>
#include <math.h>

#include "datos.h"
#include "calculos.h"

int main (void) 
{
    double dev_std = DEV_STD(&bolita_data[0][0]);

    printf("Desviacion estandar: %f", dev_std);

    return 0;
}