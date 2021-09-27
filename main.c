#include <stdio.h>
#include <math.h>

#include "datos.h"
#include "calculos.h"
#include "Formulas.h"

int main (void) 
{

    double u_tita = Incerteza_Angulo(5, L_monedas, e_monedas, 0.001, 0.0001);

    printf("u(tita): %.20f \n", u_tita);

    // for (int i = 0; i < 6; i++)
    // {
    //     double dev_std = DEV_STD(bolita_data[i]);
    //     printf("Desviacion estandar %u: %.20f\n", i, dev_std);
    // }
    


    return 0;
}