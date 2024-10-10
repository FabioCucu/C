#include <stdio.h>

int main(int argc, char *argv[])
{

	int num1, num2, num3, cont, somma = 0, numNelRange = 1;
	double media;

	do
	{
		printf("inserisci il primo numero\n");
		scanf("%d", &num1);
		printf("inserisci il secondo numero (maggiore del primo)\n");
		scanf("%d", &num2);

		if (num1 > num2)
        {
			printf("I numeri inseriti non sono adatti.\n");
        }
		else
        {
			do 
            {
                printf("Inserisci un valore all'interno del range %d - %d\n", num1, num2);
                scanf("%d", &num3);
                if (num3 <= num2 && num3 >= num1)
                {
                    cont++;
                    somma += num3;
                }
                else
                {
                    numNelRange = 0;
                }
            } while (numNelRange);
        }
	} while (numNelRange);

    media = somma / cont;

    printf("La media dei numeri inseriti è: %f", media);
    
	return 0;
}