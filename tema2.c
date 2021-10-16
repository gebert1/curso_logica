#include <stdio.h>

int main()
{
	int n, s = 0, p = 1;
	int j;
	
	if(n > 20)
	{
		printf("Número maiorque 20 digite um número menor");
	}
	
	 printf("Insira um Número inteiro: ");
	
	 scanf("%d", &n);
	
	for(j = 1; j <= n; j++)
	{
		s += j;	
		p *= j;
	}
	 printf("Número:%d\n", n);
		
	 printf("Soma:%d\n", s);
		
	 printf("Produto:%d\n",p);

	return 0;
}