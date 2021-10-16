#include <stdio.h> 
#include <string.h>

int main()
{
	char nome[100] =  "";
	char sobrenome[100] = "";
	char nome_completo[100] = " ";
	int i;
	
	printf("Nome:");
	fgets(string, 100, nome);
	string[strlen(nome) - 1] = '\0';
	printf("Sobrenome:");
	fgets(string, 100, sobrenome);
	string[strlen(sobrenome) - 1] = '\0';
	
	strcat(nome_completo, nome);
	strcat(nome_completo, " ");
	strcat(nome_completo, sobrenome);
	
	printf("Nome: %s\n", nome);
	printf("Sobrenome: %s\n", sobrenome);
	printf("Nome Completo: %s\n", nome_completo);
	
	return 0;
}