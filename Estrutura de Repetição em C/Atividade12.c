#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Faça um algoritmo recebe como entrada o número de alunos de uma turma e calcule as
médias da 1a e 2a avaliações de cada aluno e exiba na tela. Faça com que o algoritmo só
aceite notas válidas (uma nota válida deve pertencer ao intervalo [0,10]). Cada nota
deve ser validada separadamente. Deve ser impressa a mensagem "Nota inválida" caso
a nota informada não pertença ao intervalo [0,10]. Ao fim, o programa deve exibir as
médias da turma na primeira e na segunda avaliação.
 */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int  numAlunos, i=0;
	float resultado1a, resultado2a, mediaA1, mediaA2;

	printf ("Informe o números de alunos da turma: ");
	scanf ("%d", &numAlunos);
	
	while (i < numAlunos) {
		 
		do {
			printf ("\nInforme a nota da prova 1a do aluno %d: ", i+1);
			scanf ("%f", &resultado1a);
			if (resultado1a < 0 || resultado1a > 10) {
				printf ("\nNota inválida, insira uma nota entre 0 e 10 \n");
			}
			mediaA1 += resultado1a / numAlunos;
		} while (resultado1a < 0 || resultado1a > 10);	
		
		do {
			printf ("\nInforme a nota da prova 2a do aluno %d: ", i+1);
			scanf ("%f", &resultado2a);
			if (resultado2a < 0 || resultado2a > 10) {
				printf ("\nNota inválida, insira uma nota entre 0 e 10 \n");
			}
			mediaA2 += resultado2a/ numAlunos;
		} while (resultado2a < 0 || resultado2a > 10);
			
		i++;	
	}
	printf ("\nA média geral da avaliação A1 é: %.2f\n", mediaA1);
	printf ("\nA média geral da avaliação A2 é: %.2f\n", mediaA2);
	
	return 0;
}
