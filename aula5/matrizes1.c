#include <stdio.h>

int main()
{
    float notas[4];

    printf("Digite a nota 1: ");
    scanf("%f", &notas[0]);

    printf("Digite a nota 2: ");
    scanf("%f", &notas[1]);
    
    printf("Digite a nota 3: ");
    scanf("%f", &notas[2]);
    
    printf("Digite a nota 4: ");
    scanf("%f", &notas[3]);

    printf("Média das notas é %2.2f\n",
        (notas[0] + notas[1] + notas[2] + notas[3]) / 4);

    return 0;
}