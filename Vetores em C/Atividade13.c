#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 5

/*  Faça um programa que leia um vetor de 5 posições para números reais e, depois,
um código inteiro. Se o código for zero, finalize o programa; se for 1, mostre o
vetor na ordem direta; se for 2, mostre o vetor na ordem inversa. Caso, o código
seja diferente de 1 e 2 escreva uma mensagem informando que o código é inválido. */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int i, c, repetir;
	float vetor[TAM];
	
	for (i=0; i<TAM; i++){
		printf("Informe a %dº posição do vetor: ", i+1);
		scanf("%f", &vetor[i]);
	}
	
	repetir:
	
	printf("\n\nInforme um código correspondente aos abaixo:");
	printf("\n||'0' para encerrar o programa ||");
	printf("\n||'1' para ser mostrada a ordem direta dos vetores ||"); 
	printf("\n||'2' para ordem inversa dos vetor informados || - ");
	scanf("%d", &c);
	printf("\n");
	if (c == 0){
		printf("\n\nOpção de encerramento de programa selecionada!");
		printf("\nEncerrando o programa...");
		return;
	} if (c == 1){
		printf("\n\nA ordem direta é:");
		for (i=0; i<TAM; i++){
			printf("%.2f ", vetor[i]);
		}
		goto repetir;
	} if (c == 2){
		printf("\n\nA ordem inversa é:");
		for (i=4; i>=0; i--){
		printf("%.2f ", vetor[i]);
		}
		goto repetir;
	} if (c != 1 && c != 2 && c != 0 ){
		printf("\n\nCódigo inválido! Informe um código válido");
		goto repetir;
	}
				
		
	return 0;
}
