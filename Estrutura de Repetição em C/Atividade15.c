#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*  Em um frigor�fico existem 10 bois. Cada boi traz em seu pesco�o um
cart�o contendo seu n�mero de identifica��o e seu peso. Fa�a um
algoritmo que encontre e escreva o n�mero e o peso do boi mais gordo e
do boi mais magro */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	int nident, peso, i, maiorp=0, menorp=0, identmaior=0, identmenor=0;
	
	for (i=0; i<10; i++) {
		printf("Informe o n�mero de indentifica��o do %d� boi : ", i+1);
		scanf("%d", &nident);
		printf("Informe o peso do boi N�%d: ", nident);
		scanf("%d", &peso);
	
		if (i==0 || peso>maiorp){
			maiorp=peso;
			identmaior=nident;
} 		if (i==0 || peso<menorp) {
			menorp=peso;
			identmenor=nident;
}
} printf("\nO boi mais gordo � o de N�%d, pesando: %d", identmaior, maiorp);
  printf("\nO boi mais magro � o de N�%d, pesando: %d", identmenor, menorp);
	

	return 0;
}
