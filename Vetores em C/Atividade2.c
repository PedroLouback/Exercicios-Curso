#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 15 

/* Fa�a um programa que leia um vetor de 15 posi��es de n�meros inteiros e divida
todos os seus elementos pelo maior valor do vetor. Mostre o vetor ap�s os c�lculos.
 */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int vetor[TAM], i=0, maior=0;
	float divisao=0;
	
	for (i=0;i<TAM;i++){
		printf("Informe a %d� posi��o do vetor: ", i+1);
		scanf("%d", &vetor[i]);
	}
	
	printf("\n");
	maior = vetor[0];
	
	for(i=0;i<TAM;i++){
		if (vetor[i] > maior) {
		maior = vetor[i];
		}
	}
	printf("\nO maior valor �: %d\n", maior);
	printf("\n--Resultados das divis�es--\n");
	
	for (i=0;i<TAM;i++){
		divisao = (float) vetor[i]/maior;
		printf("\nO valor da divis�o do %d� vetor �: %.2f", i+1, divisao);
	}
	
	
	return 0;
}
