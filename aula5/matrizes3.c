#include <stdio.h>

int main()
{
    float notas[50];
    float soma = 0.0;
    int qtde_notas;
    int i;

    printf("Digite a quantidade de notas: ");
    scanf("%d", &qtde_notas);

    for(i = 0; i < qtde_notas; i++)
    {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }
    
    printf("A media das notas é %2.2f\n",
        soma / qtde_notas);
   
    return 0;
}