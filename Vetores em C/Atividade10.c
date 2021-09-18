#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 15

/*Crie um programa que leia um vetor com 15 posições e em seguida imprima os
valores pares desse vetor */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int i, vetor[TAM], valor_par=0;
	 
	for(i=0; i<TAM; i++){
		printf("Informe a %dº posição do vetor: ", i+1);
		scanf("%d", &vetor[i]);
	}
	
	printf("\nOs valores pares do vetor é: ");
	
	for(i=0; i<TAM; i++){
		valor_par =  vetor[i] % 2;
		if (valor_par == 0){
			printf("%d ", vetor[i]);
		}
	}
	return 0;
}
