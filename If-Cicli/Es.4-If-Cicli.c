#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
	int n1, n2;
	double squareRoot, rapp;

	do
	{
		printf("Inserisci il primo numero\n");
		scanf("%d", &n1);
		printf("Inserisci il secondo numero\n");
		scanf("%d", &n2);

		if (n1 == 0 || n2 == 0)
		{
			printf("Errore, la radice non può essere effettuata con un valore uguale a 0.");
		}

		if (n1 > n2)
		{
			rapp = n1 / n2;
		}
		else
		{
			rapp = n2 / n1;
		}

		if (rapp < 0)
		{
			printf("Errore, la radice non può essere effettuata perchè il valore del rapporto non è accettabile.");
			return 0;
		}

		squareRoot = sqrt(rapp);

		printf("Il valore della radice del rapporto tra %d e %d è: %.2f\n", n1, n2, squareRoot);
	} while (1);

	return 0;
}