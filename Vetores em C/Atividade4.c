#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 5

/* Escrever um programa que leia os elementos de um vetor de 15 posi��es, um de
cada vez. O programa calcula a m�dia aritm�tica dos elementos do vetor e
determina quais elementos do vetor s�o menores que a m�dia. Ao fim, o programa
deve imprimir os elementos menores e suas posi��es. Caso n�o seja encontrado
nenhum elementos menor que a m�dia, o usu�rio deve ser notificado atrav�s de uma
mensagem.
 */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int i, vetor[TAM], soma=0, elemento=0;
	float  media_aritmetica=0;
	
	for (i=0;i<TAM;i++) {
		printf("Informe a %d� posi��o do vetor: ", i+1);
		scanf("%d", &vetor[i]);
		soma+=vetor[i];
	}
	media_aritmetica = soma/TAM;
	
	for (i=0;i<TAM;i++){
		if (vetor[i]<media_aritmetica){
			elemento++;
			printf("\n%d � menor que a m�dia estando na %d� posi��o.", vetor[i], i+1);
		}
	}
	if (elemento==0){
		printf("\nNenhum elemento menor que a m�dia foi encontrado!");
	}
	
	
	return 0;
}
