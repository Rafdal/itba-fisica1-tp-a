#include <stdio.h>

#ifndef DATOS_H
#define DATOS_H

typedef unsigned int uint;

typedef double medicion_t[10];

const medicion_t bolita_data[10] = 
{
	{1.75,1.78,1.72,1.75,1.76,1.77,1.78,1.79,1.78,1.75}, // altura 5 monedas
	{1.56,1.55,1.53,1.5,1.51,1.54,1.52,1.53,1.57,1.56}, // altura 6 monedas
	{1.4,1.41,1.42,1.45,1.5,1.49,1.42,1.42,1.44,1.44}, // altura 7 monedas
	{1.32,1.32,1.37,1.32,1.32,1.3,1.29,1.3,1.36,1.34}, // altura 8 monedas
	{1.23,1.24,1.26,1.22,1.28,1.27,1.21,1.24,1.25,1.27}, // altura 9 monedas
	{1.18,1.15,1.16,1.2,1.18,1.15,1.16,1.2,1.21,1.24}, // altura 10 monedas
};

const medicion_t cilindro_data[10] = 
{
	{1.79,1.78,1.82,1.75,1.83,1.74,1.75,1.76,1.77,1.8},
	{1.57,1.58,1.58,1.54,1.65,1.65,1.6,1.59,1.57,1.6},
	{1.47,1.44,1.46,1.48,1.43,1.45,1.47,1.49,1.43,1.45},
	{1.35,1.32,1.34,1.37,1.38,1.37,1.36,1.35,1.38,1.36},
	{1.32,1.32,1.24,1.26,1.3,1.3,1.31,1.29,1.31,1.28},
	{1.26,1.19,1.23,1.2,1.22,1.2,1.21,1.2,1.21,1.24},
};

const double n_monedas[6] = {5, 6, 7, 8, 9, 10};

const double L_monedas = 0.336; // distancia a linea de monedas
const double l_dist = 0.3; // distancia recorrida
const double e_monedas	= 0.02114; // altura 1 moneda

#endif