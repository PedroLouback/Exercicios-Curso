#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 15

/* Faça um programa que leia um vetor de 15 posições e o compacte, ou seja,
elimine as posições com valor zero. Para isso, todos os elementos à frente do
valor zero, devem ser movidos uma posicão para trás no vetor. Assim, ao fim
da execução do exercício para o vetor abaixo:
 */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int i, j, vetor[TAM], aux;
	
	for (i=0;i<TAM;i++){
		printf("Informe a %dº posição do vetor: ", i+1);
		scanf("%d", &vetor[i]);
	}
	printf("\n---------------------------//---------------------------");
	printf("\n\nO vetor na sequência direta é : ");
	for (i=0;i<TAM;i++){
		printf("%d, ", vetor[i]);
	}

		
	printf("\n\nO vetor compactado é: ");	
	for (i=0;i<TAM;i++){
		for (j=i; j<TAM; j++){
			if (vetor[i] == 0){
				aux = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = aux;
			}
		}
		printf("%d, ", vetor[i]);	
	}
	printf("\n");
	printf("\n---------------------------//---------------------------\n");
	return 0;
}
