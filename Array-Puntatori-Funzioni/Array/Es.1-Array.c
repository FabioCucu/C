/*Popolare un array di interi di dimensione 4, stamparne a video il
contenuto.*/

#include <stdio.h>

#define ARRAYLENGTH 4

int main(int argc, char *argv[])
{
    int array[ARRAYLENGTH];

    for (int i = 0; i < ARRAYLENGTH; i++)
    {
        printf("Inserisci il %d° numero\n", i + 1);
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < ARRAYLENGTH; i++)
    {
        printf("[%d] - %d\n", i + 1, array[i]);
    }

    return 0;
}