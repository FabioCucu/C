/*Dato N un numero intero positivo, generare e visualizzare in ordine crescente i primi N numeri
interi positivi.*/

#include <stdio.h>

int main(int argc, char *argv[])
{

	int num;

	do
	{									   
		printf("inserisci un numero: \n"); 
		scanf("%d", &num);				   
	} while (num <= 0);					   

	for (int i = 0; i < num; i++)
    {
        printf("[%d]\n", i + 1);
    }

	return 0;
}