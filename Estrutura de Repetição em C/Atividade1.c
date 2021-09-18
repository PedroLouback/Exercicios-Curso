#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Deseja-se fazer um levantamento a respeito da aus�ncia de alunos �
primeira prova de Fundamentos de Computa��o para cada uma das 14
turmas existentes. Para cada turma, � fornecido um conjunto de valores,
sendo que os dois primeiros valores do conjunto correspondem �
identifica��o da turma (A, ou B, ou C, ...) e ao n�mero de alunos
matriculados, e os demais valores deste conjunto cont�m o n�mero de
matr�cula do aluno e a letra A ou P para o caso de o aluno estar ausente
ou presente, respectivamente. Fa�a um algoritmo que, para cada turma,
calcule a porcentagem de aus�ncia e escreva a identifica��o da turma e
a porcentagem calculada; determine e escreva quantas turmas tiveram
porcentagem de aus�ncia superior a 5%.
 */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	char iturma, presenca;
	int nalunos, i, matricula, j, ausente;
	float pausencia, pturma;

	for (j=0;j<14;j++){
		printf("Informe o c�digo correspondente � turma: ");
		scanf(" %c", &iturma);
		printf("\nInforme o n�mero de alunos matriculados na turma %c: ", iturma);
		scanf("%d", &nalunos);
		ausente=0;
	 	for (i=0;i<nalunos;i++) {
	 		printf ("\nInforme o n�mero de matr�cula do aluno %d: ", i+1);
	 		scanf ("%d", &matricula);
			printf ("\nInforme (P) para presente ou (A) para ausente sobre o aluno %d: ", matricula);
			scanf (" %c", &presenca);
			printf ("\n");
			if (presenca=='A') {
				ausente++;
			} 
		}
		pausencia= (float) ausente/nalunos*100;
		printf("\n||A turma %c obteve um total de %2.f%% de aus�ncia.||\n", iturma, pausencia);
		if (pausencia > 5) {
		pturma++;
		}
} 
	
	
	printf("\n||O total de turma que tiveram a aus�ncia superior 5%% foi de: %.0f||", pturma);
	
	return 0;
}
