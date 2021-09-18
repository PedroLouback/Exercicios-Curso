#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10

/* Leia um vetor de 10 números e em seguida, ordene-o em ordem decrescente.*/

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int i, j, ordem[TAM], vetor[TAM], menor_valor=0, maior_valor=0;
	
	for (i=0; i<TAM; i++){
		printf("Informe a %dº posição do vetor: ", i+1);
		scanf("%d", &vetor[i]);
	}
	
	menor_valor = 0;
	
	for (i=0; i<TAM; i++){
		
		if (vetor[i] < vetor[menor_valor]){
			menor_valor = i;		
		}
	}
	

	
	for (j=0; j<TAM; j++){
		maior_valor = 0;
		for (i=0; i<TAM; i++){
			if (vetor[i] > vetor[maior_valor]){
				maior_valor = i;
			}
		}
		ordem [j]=  vetor[maior_valor];
		vetor[maior_valor] = vetor[menor_valor];
	}
	
	
	printf("\n\nA ordem decrescente dos vetores informados é: ");
	for (i=0; i<TAM; i++){
		printf("%d ", ordem[i]);
	}
	
	return 0;
}
