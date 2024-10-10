/*Dato N un numero intero positivo, calcolare e visualizzare la somma dei
primi N numeri dispari.*/

#include <stdio.h>

int main(int argc, char *argv[])
{

	int num1, somma = 0;

	do
	{									   
		printf("inserisci il primo numero\n"); 
		scanf("%d", &num1);		

	} while (num1 <= 0);					   

	for (int i = 0; i <= num1; i++)
    {
        if (i % 2 == 1)
        {
            somma += i;
        }
    }

    printf("La somma dei primi numeri interi positivi è: %d\n", somma);

	return 0;
}