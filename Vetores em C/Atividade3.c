#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define TAM 10

/* Escrever um programa que os elementos de um vetor de 10 posições, um de cada
vez. O programa determina quantos elementos são positivos, nulos e negativos, e
imprime essas informações. Para os elementos positivos, é calculado o valor da
função f(x) = 2x – cos(x) para esses elementos. Deve ser impresso o valor do
elemento positivo e o valor da função. */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int vetor[TAM], i, cont_nulo=0, cont_positivo=0, cont_negativo=0;
	float f[i];
	
	for (i=0;i<TAM;i++){
		printf("Informe a %dª posição do vetor: ", i+1);
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
			printf("\nO valor da função f(%d) é: %.2f\n", vetor[i], f[i]);
		}
	}
	
	printf("\nO total de números de elementos nulos é: %d", cont_nulo);
	printf("\nO total de números de elementos positivos é: %d", cont_positivo);
	printf("\nO total de números de elementos negativos é: %d", cont_negativo);
	
	
	return 0;
}
