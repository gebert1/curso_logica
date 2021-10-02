#include<stdio.h>

int main()
{
	int a,b;
	
	printf("digite um numero inteiro: ");
	
	scanf("%d", &a);
	
	printf("digite outro numero inteiro: ");
	
	scanf("%d", &b);
	
	printf("Soma: %d.\n", !(a < b));
	
	return 0;
}
