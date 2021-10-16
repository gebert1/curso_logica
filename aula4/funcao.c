#include <stdio.h>

int divfun(int a, int b)
{

	if(a % b == 0)return 1;
	else return 0;
	
}

int main()
{
	printf("Resultado: %d\n", divfun(15, 5));
	printf("Resultado: %d\n", divfun(15, 6));
	
	return 0;
}