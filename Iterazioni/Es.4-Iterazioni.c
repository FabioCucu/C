/*Dato N un numero intero positivo, generare e visualizzare in ordine
crescente i numeri pari minori o uguali a N.*/

#include <stdio.h>

int main(int argc, char *argv[])
{

	int num;

	do
	{									   
		printf("inserisci un numero: \n"); 
		scanf("%d", &num);				   
	} while (num <= 0);					   

	for (int i = 0; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            printf("[%d]\n", i);
        }
    }

	return 0;
}