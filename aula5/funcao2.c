#include <stdio.h>

int minha_funcao(int a, int b)
{
    return a / b;
}

int main()
{
    int a, b;

    printf("Digite um número inteiro: ");
    scanf("%d", &a);
    
    printf("Digite outro número inteiro: ");
    scanf("%d", &b);

    printf("===============\n");
    printf("Resultado: %d\n", minha_funcao(a, b));
    printf("===============\n");

    return 0;
}