#include <stdio.h>

int main()
{
	int i = 0;
	int x;
	
	while(1 <= 100)
	{
		printf("Digite um número inteiro (-1 para sair): ");
		
		scanf("%d", &x);
		
		printf("\nNúmero: %d", x);
		
		if(x == -1)
			break;
		
		i++;
	}
	
	return 0;
}
	