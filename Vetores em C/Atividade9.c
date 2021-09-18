#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define TAM 10

/* Crie um vetor de 10 n�meros reais e solicite o usu�rio para digitar os n�meros.
Em seguida, crie mais 2 vetores do mesmo tamanho e em um deles armazene,
em cada posi��o, a raiz quadrada do elemento que est� na mesma posi��o do
vetor digitado e no segundo vetor armazene, em cada posi��o, o valor do
elemento que ocupa a mesma posi��o no vetor digitado, elevado ao cubo.
Por fim, imprima os 3 vetores (O digitado, o vetor com os valores elevados ao cubo
e o vetor com a raiz quadrada de todos os elementos) */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int i;
	float vetor[TAM], raiz_quadrada[TAM], elevado_cubo[TAM];
	
	for (i=0; i<TAM; i++){
		printf("Informe A %d� posi��o do vetor em n�mero reais: ", i+1);
		scanf("%f", &vetor[i]);
	}
	

	for(i=0; i<TAM; i++){
		raiz_quadrada[i]=sqrt(vetor[i]);
		printf("\n\nA raiz quadrada do vetor %.2f �: %.2f", vetor[i], raiz_quadrada[i]);
	}
	
	for(i=0; i<TAM; i++){
		elevado_cubo[i]=pow(vetor[i], 3);
		printf("\n\nO vetor %.2f elevado ao cubo �: %.2f", vetor[i], elevado_cubo[i]);
	}
	
	
	
	return 0;
}
