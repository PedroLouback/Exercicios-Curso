#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10

/* Fa�a um programa que leia dois vetores de 10 n�meros, o primeiro (int)
representando o n�mero de matr�cula do aluno e o segundo representando a sua
nota (float). Encontre o aluno que tirou a menor nota e o que tirou a maior nota.
Por fim, imprima o n�mero de matr�cula do aluno que tirou a maior nota, seguido
de sua nota e o n�mero do aluno que tirou a nota mais baixa, seguida de sua nota.
As posi��es do vetor s�o equivalentes. Ou seja, para encontrar a nota
correspondente ao aluno cujo n�mero de matr�cula est� armazenado na posi��o 2,
basta verificar a posi��o 2 do vetor de notas.
 */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int i, m[TAM], menor_matricula, maior_matricula;
	float n[TAM], menor, maior;
	
	for(i=0; i<TAM; i++){
		printf("Informe o n�mero de matricula do %d� aluno: ", i+1);
		scanf("%d", &m[i]);
		printf("Informe a nota do %d� aluno: ", i+1);
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
    	printf("\nN�mero de matr�cula: %d;", m[maior_matricula]);
		printf("\nNota: %.2f.\n", maior);

		printf("\n\n      ||Dados da menor nota ||      \n");
		printf("\nN�mero de matr�cula: %d;", m[menor_matricula]);
		printf("\nNota: %.2f.", menor);
		
	return 0;
}
