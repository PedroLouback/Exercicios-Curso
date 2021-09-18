#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 15

/* Fa�a um programa que leia um vetor de 15 posi��es e o compacte, ou seja,
elimine as posi��es com valor zero. Para isso, todos os elementos � frente do
valor zero, devem ser movidos uma posic�o para tr�s no vetor. Assim, ao fim
da execu��o do exerc�cio para o vetor abaixo:
 */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int i, j, vetor[TAM], aux;
	
	for (i=0;i<TAM;i++){
		printf("Informe a %d� posi��o do vetor: ", i+1);
		scanf("%d", &vetor[i]);
	}
	printf("\n---------------------------//---------------------------");
	printf("\n\nO vetor na sequ�ncia direta � : ");
	for (i=0;i<TAM;i++){
		printf("%d, ", vetor[i]);
	}

		
	printf("\n\nO vetor compactado �: ");	
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
