#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 5

/*  Fa�a um programa que leia um vetor de 5 posi��es para n�meros reais e, depois,
um c�digo inteiro. Se o c�digo for zero, finalize o programa; se for 1, mostre o
vetor na ordem direta; se for 2, mostre o vetor na ordem inversa. Caso, o c�digo
seja diferente de 1 e 2 escreva uma mensagem informando que o c�digo � inv�lido. */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int i, c, repetir;
	float vetor[TAM];
	
	for (i=0; i<TAM; i++){
		printf("Informe a %d� posi��o do vetor: ", i+1);
		scanf("%f", &vetor[i]);
	}
	
	repetir:
	
	printf("\n\nInforme um c�digo correspondente aos abaixo:");
	printf("\n||'0' para encerrar o programa ||");
	printf("\n||'1' para ser mostrada a ordem direta dos vetores ||"); 
	printf("\n||'2' para ordem inversa dos vetor informados || - ");
	scanf("%d", &c);
	printf("\n");
	if (c == 0){
		printf("\n\nOp��o de encerramento de programa selecionada!");
		printf("\nEncerrando o programa...");
		return;
	} if (c == 1){
		printf("\n\nA ordem direta �:");
		for (i=0; i<TAM; i++){
			printf("%.2f ", vetor[i]);
		}
		goto repetir;
	} if (c == 2){
		printf("\n\nA ordem inversa �:");
		for (i=4; i>=0; i--){
		printf("%.2f ", vetor[i]);
		}
		goto repetir;
	} if (c != 1 && c != 2 && c != 0 ){
		printf("\n\nC�digo inv�lido! Informe um c�digo v�lido");
		goto repetir;
	}
				
		
	return 0;
}
