/*
1/2: Realizar un programa que permita ingresar una palabra y luego devuelva
por consola si se repite la letra 's'.
En caso de ser afirmativo, que también indique la cantidad de veces
que se repite la letra.
*/

#include <stdio.h>

int main ()
{

	char palabra [21];
	int i;
	int contador = 0;

	printf("\nIngrese la palabra sin errores de una buena vez !!!:");
	scanf("%s",palabra);

	for (i=0;i<20;i++)
	{
		if (palabra[i] == 's' || palabra[i] == 'S') contador++;

	}

	if (contador == 1) printf("\nLa letra `s` se encuentra repetida %d vez", contador);
		else
		if (contador > 1) printf("\nLa letra `s` se encuentra repetida %d veces", contador);
			else
			printf("\nLa letra 's' o 'S' no se encuentra en la palabra ingresada");
}
