#include<stdio.h> 

int main()

{
	int N1, N2, N3, N4;
	
	int Q1, Q2, Q3, Q4; 
		
	printf("Número 1: ");
	 
	scanf("%d", &N1);
	
	printf("Número 2: ");
	 
	scanf("%d", &N2);
	
	printf("Número 3: ");
	 
	scanf("%d", &N3);
	
	printf("Número 4: ");
	 
	scanf("%d", &N4);
	
	Q1 = N1 * N1;
	
	Q2 = N2 * N2;
	
	Q3 = N3 * N3;
	
	Q4 = N4 * N4;

	if(N3 * N3 >= 1000)
	{	
		printf(" %d",Q3);
	}

	else 
	{
		printf("======RESULTADO======");
	
		printf("\n %d -> %d",N1, Q1);
	
		printf("\n %d -> %d",N2, Q2);
	
		printf("\n %d -> %d",N3, Q3);
	
		printf("\n %d -> %d",N4, Q4);
	
		printf("\n=====================");
	}
	
	return 0;

}