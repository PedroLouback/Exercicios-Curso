#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Deseja-se fazer um levantamento a respeito da ausência de alunos à
primeira prova de Fundamentos de Computação para cada uma das 14
turmas existentes. Para cada turma, é fornecido um conjunto de valores,
sendo que os dois primeiros valores do conjunto correspondem à
identificação da turma (A, ou B, ou C, ...) e ao número de alunos
matriculados, e os demais valores deste conjunto contêm o número de
matrícula do aluno e a letra A ou P para o caso de o aluno estar ausente
ou presente, respectivamente. Faça um algoritmo que, para cada turma,
calcule a porcentagem de ausência e escreva a identificação da turma e
a porcentagem calculada; determine e escreva quantas turmas tiveram
porcentagem de ausência superior a 5%.
 */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	char iturma, presenca;
	int nalunos, i, matricula, j, ausente;
	float pausencia, pturma;

	for (j=0;j<14;j++){
		printf("Informe o código correspondente à turma: ");
		scanf(" %c", &iturma);
		printf("\nInforme o número de alunos matriculados na turma %c: ", iturma);
		scanf("%d", &nalunos);
		ausente=0;
	 	for (i=0;i<nalunos;i++) {
	 		printf ("\nInforme o número de matrícula do aluno %d: ", i+1);
	 		scanf ("%d", &matricula);
			printf ("\nInforme (P) para presente ou (A) para ausente sobre o aluno %d: ", matricula);
			scanf (" %c", &presenca);
			printf ("\n");
			if (presenca=='A') {
				ausente++;
			} 
		}
		pausencia= (float) ausente/nalunos*100;
		printf("\n||A turma %c obteve um total de %2.f%% de ausência.||\n", iturma, pausencia);
		if (pausencia > 5) {
		pturma++;
		}
} 
	
	
	printf("\n||O total de turma que tiveram a ausência superior 5%% foi de: %.0f||", pturma);
	
	return 0;
}
