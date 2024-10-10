/*Dati due numeri interi e positivi N1 e N2 con N2>N1, generare e
visualizzare in ordine decrescente i numeri compresi tra N1 e N2.*/

#include <stdio.h>

int main(int argc, char *argv[])
{

	int num1, num2;

	do
	{									   
		printf("inserisci il primo numero\n"); 
		scanf("%d", &num1);		
        printf("inserisci il secondo numero\n"); 
		scanf("%d", &num2);
        if (num2 < num1 || num2 < 0 || num1 < 0)
        {
            printf("Errore, i valori inseriti non sono accettabili.\n============================================\n");
        }
	} while (num2 < num1 || num2 < 0 || num1 < 0);					   

	for (int i = num2; i >= num1; i--)
    {
        printf("[%d]\n", i);
    }

	return 0;
}