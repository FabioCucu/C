#include <stdio.h>

int main(int argc, char *argv[])
{

	int num1, num2;
	double r;

	do
	{
		printf("inserisci il primo numero\n");
		scanf("%d", &num1);
		printf("inserisci il secondo numero\n");
		scanf("%d", &num2);

		if (num1 > num2)
        {
			r = (double)num2 / (double)num1;
        }
		else
        {
			r = (double)num1 / (double)num2;
        }
		printf("\n\tIl risultato è: %f\n", r);
	} while (num1 != 0 && num2 != 0);

	return 0;
}