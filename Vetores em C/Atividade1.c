#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define a 5
#define b 5

/*Fa�a um programa que leia dois vetores (A e B) de cinco posi��es de n�meros
inteiros. O programa deve, ent�o. subtrair o primeiro elemento de A do �ltimo de B,
acumulando o valor, subtrair o segundo elemento de A do pen�ltimo de B,
acumulando o valor e assim por diante. Mostre o resultado da soma de todas as
subtra��es.*/

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int i=0, j=0, vetorA[a], vetorB[b], subtracao=0;
	printf("--Vetores A--\n\n");
	for (i=0;i<a;i++){
		printf("Informe o %d� n�mero do vetor A: ", i+1);
		scanf("%d", &vetorA[i]);
	}
	
	printf("\n\n");
	printf("--Vetores B--\n\n");
	for (i=0;i<b;i++){
		printf("Informe o %d� n�mero do vetor B: ", i+1);
		scanf("%d", &vetorB[i]);
	}
	
	for (i=0,j=4;i<a;i++,j--){
		subtracao += vetorA[i] - vetorB[j];
	}

	printf("\nO valor da soma de todas as subtra��es �: %d", subtracao); 
	
	
	
	return 0;
}
