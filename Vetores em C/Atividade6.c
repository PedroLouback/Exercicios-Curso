#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 6

/* Fa�a um programa que receba 6 n�meros inteiros e mostre:
a. Os n�meros pares digitados;
b. A soma dos n�meros pares digitados;
c. Os n�meros �mpares digitados;
d. A quantidade de n�meros �mpares digitados; */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int i, vetor[TAM], par[TAM], impar[i], soma=0, cont_impar=0;
		
	for(i=0;i<TAM;i++){
		printf("Informe a %d� posi��o do vetor: ", i+1);
		scanf("%d", &vetor[i]);
	}
	
	printf("\n====================//====================");
	printf("\n\na. Os n�meros pares s�o: ");
	
	for (i=0;i<TAM;i++){
		if (vetor[i]%2==0) {
			par[i] = vetor[i];
			printf("%d ", par[i]);
			soma += par[i];
		}
	}
	
	printf("\nb. A soma dos pares �: %d", soma);
	
	printf("\nc. Os n�meros impares s�o: ");

	for (i=0;i<TAM;i++){
		if (vetor[i]%2==1) {
			impar[i] = vetor[i];
			printf("%d ", impar[i]);
			cont_impar++;
		}
	}

	printf("\nd. A quantidade dos n�meros �mpares �: %d\n", cont_impar);
	printf("\n====================//====================");
		
	
	
	return 0;
}
