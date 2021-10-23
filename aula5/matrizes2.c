#include <stdio.h>

int main()
{
    float notas[4];
    int i;
    
    for(i = 0; i < 4; i++)
    {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }


    printf("Média das notas é %2.2f\n",
        (notas[0] + notas[1] + notas[2] + notas[3]) / 4);

    return 0;
}