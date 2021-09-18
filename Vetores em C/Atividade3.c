#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define TAM 10

/* Escrever um programa que os elementos de um vetor de 10 posi��es, um de cada
vez. O programa determina quantos elementos s�o positivos, nulos e negativos, e
imprime essas informa��es. Para os elementos positivos, � calculado o valor da
fun��o f(x) = 2x � cos(x) para esses elementos. Deve ser impresso o valor do
elemento positivo e o valor da fun��o. */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int vetor[TAM], i, cont_nulo=0, cont_positivo=0, cont_negativo=0;
	float f[i];
	
	for (i=0;i<TAM;i++){
		printf("Informe a %d� posi��o do vetor: ", i+1);
		scanf("%d", &vetor[i]); 
	
		if (vetor[i] == 0){
			cont_nulo++;
		} else if (vetor[i] < 0){
			cont_negativo++;
		} else if  (vetor[i] > 0){
			cont_positivo++;
		}
	}
	for (i=0;i<TAM;i++){
		if (vetor[i] > 0){
			f[i] = (float) 2*(vetor[i]) - cos(vetor[i]);
			printf("\nO valor da fun��o f(%d) �: %.2f\n", vetor[i], f[i]);
		}
	}
	
	printf("\nO total de n�meros de elementos nulos �: %d", cont_nulo);
	printf("\nO total de n�meros de elementos positivos �: %d", cont_positivo);
	printf("\nO total de n�meros de elementos negativos �: %d", cont_negativo);
	
	
	return 0;
}
