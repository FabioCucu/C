#include <stdio.h>

int main(int argc, char *argv[])
{

	int num1, num2, prod, somma = 0;

	do
	{
		printf("inserisci il primo numero\n");
		scanf("%d", &num1);
		printf("inserisci il secondo numero\n");
		scanf("%d", &num2);

		prod = num1 * num2;
		printf("il prodotto è: %d\n", prod);

		somma = somma + prod;
	} while (num1 != 0 && num2 != 0);

	printf("la somma è: %d\n", somma);

	return 0;
}