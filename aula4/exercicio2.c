#include <stdio.h> 
#include <string.h>

int main()
{
	char string[100] =  "";
	int i;
	
	printf("Digite uma string: ");
	scanf("%s", string);
	
	for(i = 0; string[i] != '\0'; i++)
	{
		if(string[i] >= 97 && string[i] <= 122)
		{
			
			printf("=======================================\n");
			printf("A string não esta em letras maiusculas!\n");
			printf("=======================================\n");
			
			return 0;
		}

	}
	
	printf("===================================\n ");
	printf("A string esta em letras maiusculas!\n");
	printf("===================================\n");
	
	return 0;
}