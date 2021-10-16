#include<stdio.h>

int main ()
{
	
	int opcao;
	
	printf("1. Consultar Saldo\n");
	
	printf("2. Recarregar Saldo\n");
	
	printf("3. Falar com Atendente\n");
	
	printf("Escolha uma opção: ");
	
	scanf("%d", &opcao);
	
	switch(opcao)
	{
		case 1:
			printf("Você escolheu Consultar Saldo\n");
			break;

		case 2:
			printf("Você escolheu Recarregar Saldo\n");
			break;
		
		case 3:
			printf("Você escolheu Falar com Atendente\n");
			break;

		default:
			printf("Opção Invalida\n");
			break;
	}

	return 0;
}