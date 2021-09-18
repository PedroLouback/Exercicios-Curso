#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Fa�a um algoritmo recebe como entrada o n�mero de alunos de uma turma e calcule as
m�dias da 1a e 2a avalia��es de cada aluno e exiba na tela. Fa�a com que o algoritmo s�
aceite notas v�lidas (uma nota v�lida deve pertencer ao intervalo [0,10]). Cada nota
deve ser validada separadamente. Deve ser impressa a mensagem "Nota inv�lida" caso
a nota informada n�o perten�a ao intervalo [0,10]. Ao fim, o programa deve exibir as
m�dias da turma na primeira e na segunda avalia��o.
 */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int  numAlunos, i=0;
	float resultado1a, resultado2a, mediaA1, mediaA2;

	printf ("Informe o n�meros de alunos da turma: ");
	scanf ("%d", &numAlunos);
	
	while (i < numAlunos) {
		 
		do {
			printf ("\nInforme a nota da prova 1a do aluno %d: ", i+1);
			scanf ("%f", &resultado1a);
			if (resultado1a < 0 || resultado1a > 10) {
				printf ("\nNota inv�lida, insira uma nota entre 0 e 10 \n");
			}
			mediaA1 += resultado1a / numAlunos;
		} while (resultado1a < 0 || resultado1a > 10);	
		
		do {
			printf ("\nInforme a nota da prova 2a do aluno %d: ", i+1);
			scanf ("%f", &resultado2a);
			if (resultado2a < 0 || resultado2a > 10) {
				printf ("\nNota inv�lida, insira uma nota entre 0 e 10 \n");
			}
			mediaA2 += resultado2a/ numAlunos;
		} while (resultado2a < 0 || resultado2a > 10);
			
		i++;	
	}
	printf ("\nA m�dia geral da avalia��o A1 �: %.2f\n", mediaA1);
	printf ("\nA m�dia geral da avalia��o A2 �: %.2f\n", mediaA2);
	
	return 0;
}
