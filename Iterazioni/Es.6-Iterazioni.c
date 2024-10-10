/*Dato N un numero intero positivo, generare e visualizzare in ordine
crescente i numeri compresi maggiori uguali di -N e minori uguali di N.*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int num1;

    do
    {

        printf("Inserisci il numero\n");
        scanf("%d", &num1);

        if (num1 <= 0)
        {
            printf("Errore, i valori inseriti non sono accettabili.\n============================================\n");
        }
    } while (num1 <= 0);

    for (int i = -num1; i <= num1; i++)
    {
        printf("[%d]\n", i);
    }
    
    return 0;
}