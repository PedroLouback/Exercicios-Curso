#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 6

/* Faça um programa que receba 6 números inteiros e mostre:
a. Os números pares digitados;
b. A soma dos números pares digitados;
c. Os números ímpares digitados;
d. A quantidade de números ímpares digitados; */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int i, vetor[TAM], par[TAM], impar[i], soma=0, cont_impar=0;
		
	for(i=0;i<TAM;i++){
		printf("Informe a %dº posição do vetor: ", i+1);
		scanf("%d", &vetor[i]);
	}
	
	printf("\n====================//====================");
	printf("\n\na. Os números pares são: ");
	
	for (i=0;i<TAM;i++){
		if (vetor[i]%2==0) {
			par[i] = vetor[i];
			printf("%d ", par[i]);
			soma += par[i];
		}
	}
	
	printf("\nb. A soma dos pares é: %d", soma);
	
	printf("\nc. Os números impares são: ");

	for (i=0;i<TAM;i++){
		if (vetor[i]%2==1) {
			impar[i] = vetor[i];
			printf("%d ", impar[i]);
			cont_impar++;
		}
	}

	printf("\nd. A quantidade dos números ímpares é: %d\n", cont_impar);
	printf("\n====================//====================");
		
	
	
	return 0;
}
