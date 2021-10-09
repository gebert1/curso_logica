#include <stdio.h>

int main()
{
	int r;
	int j;
	int o;
	
	printf("Insira a quantidade de ramos que deseja na sua linda árvore: ");
	
	scanf("%d", &r);
	
	
    for(j = 0; j <= r; j++)
    {
        for(o = 0; o < j; o++)
        {
            printf("*");
        }
       
	   printf("\n");
	}
		return 0;
}