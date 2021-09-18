#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10

/* Solicite o usu�rio para imprimir uma sequ�ncia de 10 n�meros e
imprima-os em uma ordem inversa a da leitura. Por exemplo, se os
n�meros forem digitados na sequencia abaixo: 2 7 9 3 5 1 9 7 3 2 
Eles devem ser impressos na ordem abaixo: 2 3 7 9 1 5 3 9 7 2*/

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int i, vetor[TAM];
	
	for (i=0; i<TAM; i++){
		printf("Informe o n�mero da sequ�ncia - (%d/10): ", i+1);
		scanf("%d", &vetor[i]);
	}
	
	printf ("\n\nA ordem inversa do vetor informado �: ");
	
	for (i=9; i>=0; i--){
		printf("%d ", vetor[i]);
	}

	
	return 0;
}
