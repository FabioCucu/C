/*Chiedere in input 10 interi e inserirli in un array.
Stampare a video prima tutti i numeri pari e
in seguito tutti i numeri dispari

Esempio:
input 5 6 9 11 12 13 14 10 8 21
output
6 12 14 10 8
5 9 11 13 21*/

#include <stdio.h>

#define ARRAYLENGTH 10

int main(int argc, char *argv[])
{
    int array[ARRAYLENGTH];

    for (int i = 0; i < ARRAYLENGTH; i++)
    {
        printf("Inserisci il %d° numero\n", i + 1);
        scanf("%d", &array[i]);
    }

    printf("Pari:\n");

    for (int i = 0 - 1; i < ARRAYLENGTH; i++)
    {
        if (array[i] % 2 == 0)
        {
            printf("[%d] - %d\n", i + 1, array[i]);
        }
    }

    printf("Dispari:\n");

    for (int i = 0 - 1; i < ARRAYLENGTH; i++)
    {
        if (array[i] % 2 == 1)
        {
            printf("[%d] - %d\n", i + 1, array[i]);
        }
    }

    return 0;
}