#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 5

/* Escrever um programa que leia os elementos de um vetor de 15 posições, um de
cada vez. O programa calcula a média aritmética dos elementos do vetor e
determina quais elementos do vetor são menores que a média. Ao fim, o programa
deve imprimir os elementos menores e suas posições. Caso não seja encontrado
nenhum elementos menor que a média, o usuário deve ser notificado através de uma
mensagem.
 */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int i, vetor[TAM], soma=0, elemento=0;
	float  media_aritmetica=0;
	
	for (i=0;i<TAM;i++) {
		printf("Informe a %dª posição do vetor: ", i+1);
		scanf("%d", &vetor[i]);
		soma+=vetor[i];
	}
	media_aritmetica = soma/TAM;
	
	for (i=0;i<TAM;i++){
		if (vetor[i]<media_aritmetica){
			elemento++;
			printf("\n%d é menor que a média estando na %dª posição.", vetor[i], i+1);
		}
	}
	if (elemento==0){
		printf("\nNenhum elemento menor que a média foi encontrado!");
	}
	
	
	return 0;
}
