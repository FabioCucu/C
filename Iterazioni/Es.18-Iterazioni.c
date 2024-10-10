/*Data una misura di tempo espressa in secondi S1, convertirla in ore H,
minuti M e secondi S.

Esempio: se il numero dei secondi è 1630, si dovrà ottenere, in uscita
dal programma, 0h 27m 10s.*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int s1, h, m, s;

    do
	{									   
		printf("inserisci i secondi da convertire\n"); 
		scanf("%d", &s1);		

	} while (s1 <= 0);

    m = s1/60;
    m = m % 60;
    h = s1/3600;
    s = s1 % 60;

    printf("Secondi inseriti: %d, orario convertito: %dh %dm %ds", s1, h, m, s);
    
    return 0;
}
