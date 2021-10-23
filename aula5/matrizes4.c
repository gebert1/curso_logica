#include <stdio.h>

int cdmain()
{
    float notas[10][50];
    int linha, coluna;

    //Supondo que tenhamos 3 alunos e 4 notas

    // notas aluno 1
   notas[0][0] = 2;
   notas[0][1] = 9;
   notas[0][2] = 8.5;
   notas[0][3] = 10;

     // notas aluno 2
   notas[1][0] = 1;
   notas[1][1] = 4;
   notas[1][2] = 3;
   notas[1][3] = 0;

     // notas aluno 3
   notas[2][0] = 6;
   notas[2][1] = 7;
   notas[2][2] = 1;
   notas[2][3] = 5;

     // notas aluno 4
   notas[3][0] = 9;
   notas[3][1] = 9;
   notas[3][2] = 7;
   notas[3][3] = 10;

   for(linha = 0; linha < 4; linha++)
   {
       for(coluna = 0; coluna <4; coluna++)
         {   
             printf("%2.2f ", notas[linha][coluna]);
         }
        
    printf("\n");
   }

   
    return 0;
}