#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define a 5
#define b 5

/*Faça um programa que leia dois vetores (A e B) de cinco posições de números
inteiros. O programa deve, então. subtrair o primeiro elemento de A do último de B,
acumulando o valor, subtrair o segundo elemento de A do penúltimo de B,
acumulando o valor e assim por diante. Mostre o resultado da soma de todas as
subtrações.*/

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int i=0, j=0, vetorA[a], vetorB[b], subtracao=0;
	printf("--Vetores A--\n\n");
	for (i=0;i<a;i++){
		printf("Informe o %dº número do vetor A: ", i+1);
		scanf("%d", &vetorA[i]);
	}
	
	printf("\n\n");
	printf("--Vetores B--\n\n");
	for (i=0;i<b;i++){
		printf("Informe o %dº número do vetor B: ", i+1);
		scanf("%d", &vetorB[i]);
	}
	
	for (i=0,j=4;i<a;i++,j--){
		subtracao += vetorA[i] - vetorB[j];
	}

	printf("\nO valor da soma de todas as subtrações é: %d", subtracao); 
	
	
	
	return 0;
}
