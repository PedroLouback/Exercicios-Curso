#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10

/* Faça um programa que preencha um vetor com 10 números reais, calcule e mostre
a quantidade de números negativos e a soma dos números positivos desse vetor
 */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int i, contador_num_negativo=0;
	float vetor[TAM], soma=0;
	
	for (i=0; i<TAM; i++){
		printf("Informe a %dº posição do vetor: ", i+1);
		scanf("%f", &vetor[i]);
		if (vetor[i] < 0){
			contador_num_negativo++;
		} else {
			soma += vetor[i];
		}
	}
	
	printf("A quantidade de números negativos pertencentes à esse vetor é: %d", contador_num_negativo);
	printf("\n\nA soma dos números positivos desse vetor é: %.2f", soma);

	
	
	
	return 0;
}
