#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10

/* Fa�a um programa que preencha um vetor com 10 n�meros reais, calcule e mostre
a quantidade de n�meros negativos e a soma dos n�meros positivos desse vetor
 */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int i, contador_num_negativo=0;
	float vetor[TAM], soma=0;
	
	for (i=0; i<TAM; i++){
		printf("Informe a %d� posi��o do vetor: ", i+1);
		scanf("%f", &vetor[i]);
		if (vetor[i] < 0){
			contador_num_negativo++;
		} else {
			soma += vetor[i];
		}
	}
	
	printf("A quantidade de n�meros negativos pertencentes � esse vetor �: %d", contador_num_negativo);
	printf("\n\nA soma dos n�meros positivos desse vetor �: %.2f", soma);

	
	
	
	return 0;
}
