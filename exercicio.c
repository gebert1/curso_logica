#include<stdio.h>
 
 int main()
 {
	 float peso; 
	 
	 float excesso = 0;
	 
	 float multa = 0;
	 
	 printf("Peso: ");
	 
	 scanf("%f", &peso);

	if(peso > 50)
		excesso = peso - 50;
		
	multa = excesso * 4;
	
	printf("\n======RESULTADO======");
	
	printf("\nPeso total:%f ",peso);
	
	printf("\nExcesso: %f ",excesso);
	
	printf("\nPreço da multa: %f ",multa);
	
	printf("\n=====================");
	
	return 0;
	
}
	