#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define LINHA_M 4
#define COLUNA_M 6
#define LINHA_N 6
#define COLUNA_N 4


/* Faça um programa que carregue uma matriz M de ordem 4 x 6 e uma segunda
matriz N de ordem 6 x 4. calcule e imprima a soma das linhas de M com as
colunas de N */

int main(int argc, char const *argv[])
{
    SetConsoleOutputCP(CP_UTF8);

    int i, j, matriz_M[LINHA_M][COLUNA_M], matriz_N[LINHA_N][COLUNA_N], soma=0;

    
    printf("        ==| Matriz M - Ordem 4 x 6|==        ");
    printf("\nInforme seus valores: ");
    printf("\n\n");


    for(i=0; i<LINHA_M; i++){
        for(j=0;j<COLUNA_M; j++){
        printf("A[%d][%d]: ", i+1, j+1);
        scanf("%d", &matriz_M[i][j]);
        }
    }

    printf("\n\n        ==| Matriz N - Ordem 6 x 4|==        ");
    printf("\nInforme seus valores: ");
    printf("\n\n");


    for(i=0; i<LINHA_N; i++){
        for(j=0;j<COLUNA_N; j++){
        printf("A[%d][%d]: ", i+1, j+1);
        scanf("%d", &matriz_N[i][j]);
        }
    }

    for(i=0; i<LINHA_M; i++){
        for(j=0;j<COLUNA_M; j++){
            soma += matriz_N[j][i] + matriz_N[i][j];
        } 
        printf("\nA soma da linha %d da matriz M com a coluna %d de N é: %d", i+1, i+1, soma);
        soma=0;  
    }

    return 0;
}
