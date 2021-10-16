#include <stdio.h>

int main ()
{
	char caracter;
	char string[100];
	
	printf("Digite um caracter: ");
	
	scanf("%c", &caracter);
	
	printf("\nDigite uma String: ");
	
	scanf("%s", &string);
	
	printf("\nVocê digitou o caracter: %c\n", caracter);
	
	printf("\nVocê digitou a string: %s\n", string);
	
	printf("\nO caracter da posição 3 é: %s\n", string[3]);
	
	return 0;
}