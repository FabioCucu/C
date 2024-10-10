/*Dato un numero N calcolare e visualizzare tutte le coppie di numeri minori di N che
danno per somma il numero stesso. Non considerare la proprietC  commutativa. */

#include <stdio.h>

int main()
{
	int n1, coppia1, somma;
    
    do
    {
    	printf("Inserisci un numero\n");
	    scanf("%d", &n1);
    } while(n1 <= 0);
    
    coppia1 = n1;
    
    for (int i = 0; i < n1; i++)
    {
        printf("[%d] + [%d] = %d\n", i, coppia1, n1);
        coppia1--;
        if (coppia1 < n1 / 2)
        {
            return 0;
        }
    }

	return 0;
}