/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : Nahuel Villaverde Guzman
 Version     : (Entradas, procesos y salidas) Ejercicio 2-2
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

    int respuesta = 1;
    int num;

    int flagPositivo = 0;
    int flagNegativo = 0;
    int positivosTotales = 0;
    int negativosTotales = 0;
    float promedioPositivos;
    float promedioNegativos;
    int negativoMaximo;
    int positivoMinimo;
    int contadorNegativos = 0;
    int contadorPositivos = 0;

    while(respuesta == 1)
    {
    	printf("Ingrese el número: ");
    	scanf("%d",&num);

    	if(flagPositivo == 0 && num > 0)
    	{
    		positivoMinimo = num;
    		flagPositivo = 1;
    	}

    	if(flagNegativo == 0 && num < 0)
    	{
    		negativoMaximo = num;
    		flagNegativo = 1;
    	}
    	else if(num < 0)
    	{
    		negativosTotales = negativosTotales + num;
    		contadorNegativos++;
    		if(num > negativoMaximo)
    		{
    			negativoMaximo = num;
    		}
    	}
    	else
    	{
    		positivosTotales = positivosTotales + num;
    		contadorPositivos++;
    		if(num < positivoMinimo)
    		{
    			positivoMinimo = num;
    		}
    	}

    	/*
    	else if(num < 0 && num > negativoMaximo)
    	{
    	    	negativoMaximo = num;
    	    	flag = 1;
    	}
    	else if(num > 0 && num < positivoMinimo)
    	{
    	    positivoMinimo = num;
    	}
    	*/
    	printf("Quieres seguir ingresando numeros?(1 para aceptar/ otro numero para rechazar)");
    	scanf("%d",&respuesta);
    }

    promedioPositivos = positivosTotales / contadorPositivos;
    promedioNegativos = negativosTotales / contadorNegativos;

    printf("el promedio de los positivos es: %.2f\nel promedio de negativos es: %.2f\nel negativo maximo es %d y el positivo minimo es %d", promedioPositivos , promedioNegativos , negativoMaximo , positivoMinimo);
    return 0;
}
