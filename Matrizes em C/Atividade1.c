#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define LINHA 5
#define COLUNA 4

/* Faça um programa que leia uma matriz de 5 linhas e 4 colunas contendo as
seguintes informações sobre alunos de uma disciplina:
• Primeira coluna: número de matricula do aluno
• Segunda coluna: média das provas
• Terceira coluna: média dos trabalhos
• Quarta coluna: nota final
Elabore um programa que
a. Leia as três primeiras informações de cada aluno
b. Calcule a nota final como sendo a soma da média das provas e da média
dos trabalhos
c. Imprima a matrícula do aluno que obteve a maior nota final. Se mais de
um aluno tirar a mesma nota e ela for a maior, imprima todos que tiraram
a maior nota.
d. Imprima a média aritmética das notas finais.
 */

int main(int argc, char const *argv[])
{
    SetConsoleOutputCP(CP_UTF8);

    int i, j, maior_matricula=0,  matricula[LINHA][COLUNA];
    float maior=0, media_prova[LINHA][COLUNA], media_trabalhos[LINHA][COLUNA], nota_final[LINHA][COLUNA], media_sala=0;
    for (i=0;i<LINHA;i++){
        for (j=0; j<COLUNA;j++){
            if (j == 0){
                printf("Informe a matrícula do %d° aluno: ", i+1);
                scanf("%d", &matricula[i][j]);
            }
            if (j == 1){
                printf("\nInforme a média da prova do %d° aluno: ", i+1);
                scanf("%f", &media_prova[i][j]);
            }
            if (j == 2){
                printf("\nInforme a média do trabalho do %d° aluno: ", i+1);
                scanf("%f", &media_trabalhos[i][j]);
            }
            if (j == 3){
                nota_final[i][j] = media_prova[i][1] + media_trabalhos[i][2]; 
                printf("\nA nota final do %d° aluno é %f", i+1, nota_final[i][j]);
                printf("\n\n\n");
                media_sala+=nota_final[i][j];
            }

            if (nota_final[i][3] > maior){
                maior = nota_final[i][3];
                maior_matricula = i;
            }
        }
    } 
    printf("\n      ||Dados da maior notas||     \n");
    printf("\nNúmero de matrícula da maior nota é:");
    for (i=0,j=0;i<COLUNA;i++){
        if(nota_final[i][3] == maior){
            printf("%d ", matricula[i][j]);
        }
    } 
    printf("\nNota: %.2f", maior);  
    
    printf("\n\n      ||Dados das notas finais||     \n");
    printf("\nA média aritmética das notas finais é %.2f ", media_sala/LINHA);
    printf("\n");

    return 0;
}

