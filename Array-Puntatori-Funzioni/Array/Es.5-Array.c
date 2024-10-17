/*scrivere in C un programma che concatena in un unica stringa le stringhe
chieste in input da riga di comando.


Esempio:
$./a.out ciao a tutti gli studenti
ciao a tutti gli studenti*/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char stringa[100], temp[20];

    if (argc < 2)
    {
        printf("Numero di parametri non adeguato.\n");
        return 0;
    }

    for (int i = 1; i < argc; i++)
    {
        strcpy(temp, argv[i]);
        strcat(stringa, temp);
    }

    printf("%s\n", stringa);

    return 0;
}