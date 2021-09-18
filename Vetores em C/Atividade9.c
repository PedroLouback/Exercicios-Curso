#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define TAM 10

/* Crie um vetor de 10 números reais e solicite o usuário para digitar os números.
Em seguida, crie mais 2 vetores do mesmo tamanho e em um deles armazene,
em cada posição, a raiz quadrada do elemento que está na mesma posição do
vetor digitado e no segundo vetor armazene, em cada posição, o valor do
elemento que ocupa a mesma posição no vetor digitado, elevado ao cubo.
Por fim, imprima os 3 vetores (O digitado, o vetor com os valores elevados ao cubo
e o vetor com a raiz quadrada de todos os elementos) */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int i;
	float vetor[TAM], raiz_quadrada[TAM], elevado_cubo[TAM];
	
	for (i=0; i<TAM; i++){
		printf("Informe A %dº posição do vetor em número reais: ", i+1);
		scanf("%f", &vetor[i]);
	}
	

	for(i=0; i<TAM; i++){
		raiz_quadrada[i]=sqrt(vetor[i]);
		printf("\n\nA raiz quadrada do vetor %.2f é: %.2f", vetor[i], raiz_quadrada[i]);
	}
	
	for(i=0; i<TAM; i++){
		elevado_cubo[i]=pow(vetor[i], 3);
		printf("\n\nO vetor %.2f elevado ao cubo é: %.2f", vetor[i], elevado_cubo[i]);
	}
	
	
	
	return 0;
}
