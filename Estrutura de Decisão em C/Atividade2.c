#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Faça um algoritmo para ler dois valores: N1 e N2, e se N1 for maior que 
N2 executa a soma de N1 e N2; caso contrário, executa uma subtração.*/

int main(int argc, char *argv[]) {
	
	setlocale (LC_ALL,"Portuguese");
	int n1,n2,soma,subtracao;
	
	printf("Digite dois números: ");
	scanf("%d %d", &n1, &n2);
	
	if (n1>n2) {
		soma=(n1+n2);
		printf("A soma de %d entre %d é: %d ", n1,n2,soma);
	} else if (n1<n2) {
		subtracao=(n2-n1);
		printf("A subtracao de %d entre %d é: %d", n1,n2,subtracao);
	}
   
	return 0;
}

