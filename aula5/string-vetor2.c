#include <stdio.h>
#include <string.h>

int main ()
{
    char meses[12] [50] = {
        "Janeiro",
        "Fevereiro",
        "Março",
        "Abril",
        "Maio",
        "Junho",
        "Julho",
        "Agosto",
        "Setembro",
        "Outubro",
        "Novembro",
        "Dezembro"

    };
    int i;
    
    for(i = 0; i <12; i++)
    {
        printf("%s\n", meses[i]);

    }

    return 0;
}