#include<stdio.h>

int main()
{
	int codigo;
	
	float horas = 0;
	
	float salario = 10;
	
	float salario2 = 20;
	
	float extra = 0;
	
	float maxima = 0;
	
	float total = 0;
	
	printf("Código de trabalhador: ");
	
	scanf("%d", &codigo);
	
	printf("Horas trabalhadas: ");
	
	scanf("%f", &horas);
	
	if(horas > 50)
	{
		extra = horas -50;
		
		maxima = 50; 
		
	}
	salario2 = extra * 20;
	
	salario = maxima * 10;
	
	total = salario + salario2;
	
	printf("======RESULTADO======");
	
	printf("\nHoras trabalhadas:%f ",horas);
	
	printf("\nSalário Normal:%f ",salario);
	
	printf("\nSalário Extra:%f ",salario2);
	
	printf("\nSalário Total:%f ",total);
	
	printf("\n=====================");
	
	return 0;
}	