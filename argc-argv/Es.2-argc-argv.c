/*Si scriva un programma che calcoli l'elevazione a potenza del valore intero
passato come primo argomento per il secondo argomento intero.

Esempio:

$./es 2 3
2 ^ 3 = 8  */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Numero parametri non adeguato.\n");
        return 0;
    }
    
    int base = atoi(argv[1]), esponente = atoi(argv[2]);
    
    printf("%d ^ %d = %d",base, esponente, ((int)pow(base, esponente)));
	return 0;
}