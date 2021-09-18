#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10

/* Leia 10 n�meros inteiros e armazene em um vetor. Em seguida escreva os
elementos que s�o primos e suas respectivas posi��es no vetor. */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int i, j, n, vetor[TAM], numero_primo=0; 
	
	
	for(i=0; i<TAM; i++){
		printf("Informe a %d� posi��o do vetor: ", i+1);
		scanf("%d", &vetor[i]);
	}
	
	for(i=0; i<TAM; i++){
		n = vetor[i];
		if (n != 1){
			numero_primo = 0;
			for(j=2; j<n; j++){
				if(n%j==0){
					numero_primo = 1;
				}
			} 
			if(numero_primo == 0){
				printf("\n\nO n�mero %d � um n�mero primo", n);
				printf("\nO n�mero %d est� armazenado na %d� posi��o ", n, i+1);
			}
		}
	}

	
	return 0;
}
