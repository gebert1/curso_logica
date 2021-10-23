#include <stdio.h>

int main()
{
	float notas[10][50];
	float soma = 0.0;
	int qtde_notas, qtde_alunos;
	int i, j;

	printf("Digite a quantidade de alunos: ");
	scanf("%d", &qtde_alunos);

	printf("Digite a quantidade de notas: ");
	scanf("%d", &qtde_notas);

	for(i = 0; i < qtde_alunos; i++)
	{
		printf("\nNotas do aluno %d:\n", i + 1);
		for(j = 0; j < qtde_notas; j++)
		{
			printf("Digite a nota %d: ", j + 1);
			scanf("%f", &notas[i][j]);
		}
	}

	printf("\n\nMÉDIAS:");
	for(i = 0; i < qtde_alunos; i++)
	{
		for(j = 0; j < qtde_notas; j++)
		{
			soma += notas[i][j];
		}
		printf("\nMédia do aluno %d: %f",
			i+1, soma / qtde_notas);
		soma = 0;
	}

	return 0;
}