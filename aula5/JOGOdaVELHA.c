# include <stdio.h>
# include <stdlib.h>

void valida_linha_coluna(int linha, int coluna)
{
	if(linha > 2 || linha < 0)
	{
		printf("\nLinha inválida. Digite um valor do 0 ao 2.");
		exit(1);
	}

	if(coluna > 2 || coluna < 0)
	{
		printf("\nColuna inválida. Digite um valor do 0 ao 2.");
		exit(1);
	}
}

void imprimi_tabuleiro(char tabuleiro[3][3])
{
	int j, k;

	printf("    0   1   2\n\n");
	for(j = 0; j <= 2; j++)
	{
		printf("%d  ", j);
		for(k = 0; k<=2; k++)
		{
			if(k != 2)
				printf(" %c |", tabuleiro[j][k]);
			else
				printf(" %c ", tabuleiro[j][k]);
		}

		printf("\n   -----------\n");
	}
	printf("\n");
}

void testa_vencedor(char tabuleiro[3][3])
{
	int i;
	for(i = 0; i <= 2; i++)
	{
		if(
			tabuleiro[i][0] == tabuleiro[i][1]
			&& tabuleiro[i][1] == tabuleiro[i][2]
			&& tabuleiro[i][2] != '@'
		)
		{
			printf("\n\n%c ganhou o jogo.", tabuleiro[0][0]);
			exit(0);
		}
	}
  
    if(tabuleiro[0][0] == tabuleiro[1][1] &&
        tabuleiro[1][1] == tabuleiro[2][2] &&
        tabuleiro[0][0] != '@'
    )
    {
         printf("\n\n%c ganhou o jogo.", tabuleiro[0][0]);
	     exit(0);
    }
	
    if(tabuleiro[2][0] == tabuleiro[1][1] &&
        tabuleiro[0][2] == tabuleiro[1][1] &&
        tabuleiro[2][0] != '@'
    )
    {
         printf("\n\n%c ganhou o jogo.", tabuleiro[0][0]);
	     exit(0);
    }
   
     if(tabuleiro[0][0] == tabuleiro[1][0] &&
        tabuleiro[2][0] == tabuleiro[1][0] &&
        tabuleiro[0][0] != '@'
    )
    {
         printf("\n\n%c ganhou o jogo.", tabuleiro[0][0]);
	     exit(0);
 
    }
     if(tabuleiro[0][1] == tabuleiro[1][1] &&
        tabuleiro[2][1] == tabuleiro[1][1] &&
        tabuleiro[0][1] != '@'
    )
    {
         printf("\n\n%c ganhou o jogo.", tabuleiro[0][0]);
	     exit(0);
 
    }
      if(tabuleiro[0][2] == tabuleiro[1][2] &&
        tabuleiro[2][2] == tabuleiro[1][2] &&
        tabuleiro[0][2] != '@'
    )
    {
         printf("\n\n%c ganhou o jogo.", tabuleiro[0][0]);
	     exit(0);
 
    }
}

int main()
{
	char tab[3][3];
	int linha, coluna;   
	int i, j, k;

	for(j = 0; j <= 2; j++)
	{
		for(k = 0; k<=2; k++)
			tab[j][k] = '@';
	}

	imprimi_tabuleiro(tab);

	for(i = 0; i < 9; i++)
	{
	                	// TO DO: Se a jogada for inválida
                        // deve pedir para jogar novamente.
                        // TO DO: Verificar se aquela posição já não
                        // está ocupada.
		if(i % 2 == 0)
		{
			printf("X: ");
			scanf("%d:%d", &linha, &coluna);
			valida_linha_coluna(linha, coluna);
			tab[linha][coluna] = 'X';
		}
		else
		{
			printf("O: ");
			scanf("%d:%d", &linha, &coluna);
			valida_linha_coluna(linha, coluna);
			tab[linha][coluna] = 'O';
		}

		imprimi_tabuleiro(tab);

		testa_vencedor(tab);
	}

	return 0;
}