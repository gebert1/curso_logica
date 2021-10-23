#include <stdio.h>
#include <string.h>

int main ()
{
    char nomes[3] [7];

    printf("Digite uma palavra: ");
    scanf("%s", nomes[0]);
    printf("%s\n", nomes[0]);
    printf("%c", nomes[0] [5]);
    

    return 0;
}