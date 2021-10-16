#include <stdio.h> 
#include <string.h>

int main()
{
	char string[100] =  "";
	int vogais = 0;
	int consoantes = 0;
	int q = 0;
	
	
	printf("Digite uma string qualquer:");
	scanf("%s", string);
	
	for(q = 0; string[q] != '\0'; q++)
	{
		if(string[q] == 'A' || string[q] == 'a' || string[q] == 'E' || string[q] == 'e' || string[q] == 'I' || string[q] == 'i' || string[q] == 'O' || string[q] == 'o' || string[q] == 'U' || string[q] == 'u')
		{
			vogais++;
		}
		
		else
		{
			consoantes++;
		}
	}

	
	printf("==================\n");
	printf("String digitada: %s\n", string);
	printf("Vogais: %d\t%c\n", vogais);
	printf("Consoantes: %d\t%c\n", consoantes);
	printf("==================");


	
	return 0;
}