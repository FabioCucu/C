/*Si legga da riga di comando una stringa e la si mostri in output
invertita. Per fare l'inversione si implementi la funzione inverti.

Esempio:
$./a.out ciao
oaic*/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char stringa[20];

    if (argc != 2)
    {
        printf("Numero di parametri non adeguato.\n");
        return 0;
    }

    strcpy(stringa, argv[1]);

    int first = 0;
    int last = strlen(stringa) - 1;
    char temp;

    // Swap characters till first and last meet
    while (first < last) {
      
        // Swap characters
        temp = stringa[first];
        stringa[first] = stringa[last];
        stringa[last] = temp;

        // Move pointers towards each other
        first++;
        last--;
    }

    printf("%s\n", stringa);

    return 0;
}