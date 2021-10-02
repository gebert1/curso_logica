#include<stdio.h>

int main()
{
	int a,b;
	
	printf("A: ");
	
	scanf("%d", &a);
	
	printf("B: ");
	
	scanf("%d", &b);
	
	if(a < b && a > 0)
	{
		printf("A é menor que B e maior que 0");
	}
	
	else if(a < b && a < 0)
	{
		printf("A é menor que B e menor que 0");
	}
	
	else
	{	
		printf("A é maior que B");
	}
	
	return 0;
	
}

	