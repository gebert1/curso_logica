#include <stdio.h> 
#include <string.h>

int main()
{
	char nome[100] =  "Carlos Rafael";
	char sobrenome[100] = "de Oliveira Carneiro";
	char nome_completo[100] = "";
	int i;
	
	strcat(nome_completo, nome);
	strcat(nome_completo, " ");
	strcat(nome_completo, sobrenome);
	
	printf("Nome: %s\n", nome);
	printf("Sobrenome: %s\n", sobrenome);
	printf("Nome Completo: %s\n", nome_completo);
	
	return 0;
}