#include <stdio.h>
#include <math.h>

#include "datos.h"
#include "calculos.h"
#include "Formulas.h"

int main (void) 
{

    double u_tita = Incerteza_Angulo(5, L_monedas, e_monedas, 0.001, 0.0001);

    printf("u(tita): %.20f \n", u_tita);

    for (int i = 0; i < 6; i++)
    {
        double Dx = DEV_STD(bolita_data[i]);
        double u_T = hypo(Dx/sqrt(10), u_cronometro);

        double u_a = Incerteza_Aceleracion(l_dist, PROM(bolita_data[i]), u_metro, u_T);
        

        printf("Altura: %.0f\n", n_monedas[i]);
        printf("Dx: %.10f\n", Dx);
        printf("Prom_T: %.10f\n", PROM(bolita_data[i]));
        printf("u_T: %.10f\n", u_T);
        printf("u_a: %.10f\n", u_a);
    }

    


    return 0;
}