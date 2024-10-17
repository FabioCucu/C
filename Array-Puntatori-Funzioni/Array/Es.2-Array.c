/*Chiedere in input 5 interi e inserirli in un array.
Stampare a video l'array al contrario.
Esempio:
input 5 6 9 11 12
output 12 11 9 6 5*/

#include <stdio.h>

#define ARRAYLENGTH 5

int main(int argc, char *argv[])
{
    int array[ARRAYLENGTH];

    for (int i = 0; i < ARRAYLENGTH; i++)
    {
        printf("Inserisci il %d° numero\n", i + 1);
        scanf("%d", &array[i]);
    }

    for (int i = ARRAYLENGTH - 1; i >= 0; i--)
    {
        printf("[%d] - %d\n", i + 1, array[i]);
    }
    return 0;
}