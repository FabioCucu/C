/*Dato N un numero intero positivo maggiore di 1, generare e visualizzare
il numero precedente.*/

#include <stdio.h>

int main(int argc, char *argv[])
{

	int num;

	do
	{									   
		printf("inserisci un numero: \n"); 
		scanf("%d", &num);				   
	} while (num <= 0);					   

	printf("Il numero successivo vale: %d\n", num - 1);

	return 0;
}