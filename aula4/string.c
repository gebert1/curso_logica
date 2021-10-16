#include <stdio.h> 
#include <string.h>

int main()
{
	char palavra_chave[] = "testeteste";
	char string[100];
	
	printf("Digite a palavra chave; ");
	scanf("%s", string);
	
	if(strcmp(palavra_chave, string) == 0)
		puts("Senha correta\n");
	else
		puts("Senha incorreta\n");
	
	return 0;
}