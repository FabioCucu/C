/*Dati due numeri interi positivi N1 e N2 con N2>N1, generare e
visualizzare in ordine crescente i numeri interi compresi
nell'intervallo chiuso [N1,N2].*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int num1, num2;

    do
    {

        printf("Inserisci il primo numero\n");
        scanf("%d", &num1);
        printf("Inserisci il secondo numero\n");
        scanf("%d", &num2);

        if (num2 < num1)
        {
            printf("Errore, i valori inseriti non sono accettabili.\n============================================\n");
        }
    } while (num2 < num1);

    for (int i = num1; i < num2 - 1; i++)
    {
        printf("[%d]\n", i + 1);
    }
    
    return 0;
}