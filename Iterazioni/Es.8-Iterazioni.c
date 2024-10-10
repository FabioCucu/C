/*Dato N un numero intero positivo, generare e visualizzare in ordine
decrescente i primi N numeri interi positivi.*/

#include <stdio.h>

int main(int argc, char *argv[])
{

	int num;

	do
	{									   
		printf("inserisci un numero: \n"); 
		scanf("%d", &num);			   
	} while (num <= 0);					   

	for (int i = num; i > 0; i--)
    {
        printf("[%d]\n", i);
    }

	return 0;
}