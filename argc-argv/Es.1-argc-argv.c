/*Scrivi un programma che legge da argv[1] un numero intero positivo (N) e poi
disegna a terminale un quadrato vuoto composto di asterischi ('*')
con il lato lungo N:

Per N pari a 3 il programma stampa:

***
* *
***
Per N pari a 5 il programma stampa:

*****
*   *
*   *
*   *
*****  */

#include <stdio.h>

int main(int argc, char *argv[])
{
	int n1, riga = 0, contRiga = 0;

	if (argc != 2)
	{
		printf("Parametri inseriti non adeguati.");
	}

	n1 = atoi(argv[1]);

	for (int i = 0; i < n1; i++)
	{
		for (int j = 0; j < n1; j++)
		{
			if (riga == 0 || riga == n1 - 1)
			{
				printf("*");
			}
			else
			{
			    contRiga++;
			    if (contRiga == 1 || contRiga == n1)
			    {
			        printf("*");
			    }
			    else
			    {   
			        printf(" ");
			    }
			}
			
		}
		contRiga = 0;
		printf("\n");
		riga++;
	}

	return 0;
}