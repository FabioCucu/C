/*Dato un numero intero positivo N verificare se N è un numero primo.*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int num1;

    do
	{									   
		printf("inserisci il primo numero\n"); 
		scanf("%d", &num1);		

	} while (num1 <= 0);

    for (int i = num1 - 1; i > 1; i--)
    {
        if (num1 % i == 0)
        {
            printf("Il numero inserito non è un numero primo.\n")

            return 0;
        }
    }

    printf("Il numero che hai inserito è un numero primo.");
    
    return 0;
}
