#include <stdio.h>

int multi_fun(int a, int b)
{
    int resultado = 1, i;

    for(i = 0; i< b; i++)
    {
        resultado *= a;
    }
    return resultado;
}

int main()
{
    printf("%d\n", multi_fun(2, 3));
    printf("%d\n", multi_fun(2, 4));
    printf("%d\n", multi_fun(3, 2));

    return 0;
}