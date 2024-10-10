/*Dato N un numero intero positivo, generare e visualizzare il numero 
successivo.*/

#include <stdio.h>

int main(int argc, char *argv[])
{

	int num;

	do
	{									   
		printf("inserisci un numero: \n"); 
		scanf("%d", &num);				   
	} while (num <= 0);					   

	printf("Il numero successivo vale: %d\n", num + 1);

	return 0;
}