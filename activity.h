#ifndef ACTIVITY_H_INCLUDED
#define ACTIVITY_H_INCLUDED

// =================================================================
//
// File: activity.h
// Author: Iván Ricardo Paredes Avilez
// Date: 26/08/2022
//
// =================================================================

// =================================================================
// sumaIterativa. Calculate the sum from 1 to n with an iterative
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	O(n)
// Se tiene esta complejidad porque el cálculo se repetirá tantas
// veces como el tamaño del número introducido. El ciclo while no
// terminará hasta que se llegue al número indicado.
// =================================================================
unsigned int sumaIterativa(unsigned int n) {
	int i = 0;
	int suma = 0;
	while(i<=n){
		suma = suma + i;
		i = i + 1;
	}
	return suma;
}

// =================================================================
// sumaRecursiva. Calculate the sum from 1 to n with an recursive
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity: O(n)
// Se tiene esta complejidad porque dependiendo del tamaño del
// número que se introduzca en la función, es el número de veces que
// se repetirá el proceso. Se tiene una condicional para el cero y
// los números negativos porque se intenta calcular la suma desde el
// número 1.
// =================================================================
unsigned int sumaRecursiva(unsigned int n) {
	if (n<=0){
        return 0;
    }
    else{
        return n + sumaRecursiva(n-1);
    }
}

// =================================================================
// sumaDirecta. Calculate the sum from 1 to n with a mathematical
// method.
//
// Nota: La fórmula de la sumaDirecta es llamada "Suma de Gauss".
// La historia puede leerse en el siguiente link:
// https://francis.naukas.com/2010/04/15/iii-carnaval-de-matematicas
// -toda-la-verdad-sobre-la-anecdota-de-gauss-el-nino-prodigio-su-pr
// ofesor-y-la-suma-de-1-a-100/
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	O(1)
// Se tiene esta complejidad porque la función necesita
// realizar un solo cálculo y, a su vez, este cálculo no aumenta su
// complejidad con el tamaño.
// =================================================================
unsigned int sumaDirecta(unsigned int n) {
	return n*(n+1)/2;
}

#endif // ACTIVITY_H_INCLUDED
