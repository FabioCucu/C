#include <stdio.h>

int main(int argc, char *argv[])
{

	int num1, num2, num3, pari = 0, dispari = 0, nulla = 0, controllo;
	double media;

	do
	{
		printf("inserisci il primo numero\n");
		scanf("%d", &num1);
		printf("inserisci il secondo numero\n");
		scanf("%d", &num2);
        printf("inserisci il terzo numero\n");
		scanf("%d", &num3);

		if (num1 + num2 > num3)
        {
			printf("I numeri inseriti non sono adatti (la somma dei primi due deve risultare minore del terzo numero).\n");
            controllo = 1;
        }
		else
        {
			if ((num1 - num2) % 2 == 0)
            {
                nulla++;
            }
            else if ((num1 - num2) % 2 == 1)
            {
                dispari++;
            }
            else
            {
                pari++;
            }
        }
	} while (num1 != 0 && num2 != 0 && num3 != 0);

    printf("Il numero di differenze pari dei due numeri è: %d, dispari: %d, nulla: %d", pari, dispari, nulla);
    
	return 0;
}