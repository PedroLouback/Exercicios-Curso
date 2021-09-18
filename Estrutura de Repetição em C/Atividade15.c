#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*  Em um frigorífico existem 10 bois. Cada boi traz em seu pescoço um
cartão contendo seu número de identificação e seu peso. Faça um
algoritmo que encontre e escreva o número e o peso do boi mais gordo e
do boi mais magro */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	int nident, peso, i, maiorp=0, menorp=0, identmaior=0, identmenor=0;
	
	for (i=0; i<10; i++) {
		printf("Informe o número de indentificação do %dº boi : ", i+1);
		scanf("%d", &nident);
		printf("Informe o peso do boi Nº%d: ", nident);
		scanf("%d", &peso);
	
		if (i==0 || peso>maiorp){
			maiorp=peso;
			identmaior=nident;
} 		if (i==0 || peso<menorp) {
			menorp=peso;
			identmenor=nident;
}
} printf("\nO boi mais gordo é o de Nº%d, pesando: %d", identmaior, maiorp);
  printf("\nO boi mais magro é o de Nº%d, pesando: %d", identmenor, menorp);
	

	return 0;
}
