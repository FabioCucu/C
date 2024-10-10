/*Dati due numeri interi positivi N1 ed N2 calcolare, mediante la somma
ripetuta, il prodotto dei due numeri e visualizzarli.*/

#include <stdio.h>

int main(int argc, char *argv[])
{

	int num1, num2, prodotto = 0;

	do
	{									   
		printf("inserisci il primo numero\n"); 
		scanf("%d", &num1);		
        printf("inserisci il secondo numero\n"); 
		scanf("%d", &num2);

	} while (num1 <= 0 || num2 <= 0);					   

	for (int i = 0; i < num2; i++)
    {
        prodotto += num1;
    }

    printf("Il prodotto dei primi numeri interi positivi è: %d\n", prodotto);

	return 0;
}