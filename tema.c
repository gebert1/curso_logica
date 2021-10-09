#include <stdio.h>

int main()
{
	int i, k;
	
	printf("Digite 1 número para sua tabuada: ");
	
	scanf("%d", &k);
	
	printf("======TABUADA=====\n",i);
	
	i = 1;
	 
	 while(i <= 10)
	 {
		 printf("%d X %d = %d\n", i, k, i*k);
		 
		 i++;
	 }
	 
	return 0;
}