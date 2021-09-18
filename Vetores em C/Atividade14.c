#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10

/* Faça um programa que leia dois vetores de 10 números, o primeiro (int)
representando o número de matrícula do aluno e o segundo representando a sua
nota (float). Encontre o aluno que tirou a menor nota e o que tirou a maior nota.
Por fim, imprima o número de matrícula do aluno que tirou a maior nota, seguido
de sua nota e o número do aluno que tirou a nota mais baixa, seguida de sua nota.
As posições do vetor são equivalentes. Ou seja, para encontrar a nota
correspondente ao aluno cujo número de matrícula está armazenado na posição 2,
basta verificar a posição 2 do vetor de notas.
 */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int i, m[TAM], menor_matricula, maior_matricula;
	float n[TAM], menor, maior;
	
	for(i=0; i<TAM; i++){
		printf("Informe o número de matricula do %dº aluno: ", i+1);
		scanf("%d", &m[i]);
		printf("Informe a nota do %dº aluno: ", i+1);
		scanf("%f", &n[i]);
		printf("\n");
	} 

	maior = n[0];
    for (i = 0; i < TAM; i++) {
        if ( n[i] > maior) {
			maior = n[i];
			maior_matricula = i;
		}	
	}
		
	menor = n[0];	
	for (i = 0; i < TAM; i++) {
		if ( n[i] < menor) {
			menor = n[i];
			menor_matricula = i;	
		}	
    }	
    	printf("\n\n      ||Dados da maior nota ||     \n");
    	printf("\nNúmero de matrícula: %d;", m[maior_matricula]);
		printf("\nNota: %.2f.\n", maior);

		printf("\n\n      ||Dados da menor nota ||      \n");
		printf("\nNúmero de matrícula: %d;", m[menor_matricula]);
		printf("\nNota: %.2f.", menor);
		
	return 0;
}
