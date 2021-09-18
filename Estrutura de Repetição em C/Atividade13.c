#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Escreva um programa que leia um número inteiro positivo n e em seguida imprima 
n linhas do chamado Triangulo de Floyd. Para exemplificar, no Triangulo de 
Floyd, para n = 6, temos:
• 1
• 2 3
• 4 5 6
• 7 8 9 10
• 11 12 13 14 15
• 16 17 18 19 20 21
Para n = 7, temos:
• 1
• 2 3
• 4 5 6
• 7 8 9 10
• 11 12 13 14 15
• 16 17 18 19 20 21
• 22 23 24 25 26 27 28
 */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int n, i, j, c=0;
	
	while (n <= 0) {
	printf ("Informe um número inteiro positivo: ");
	scanf ("%d", &n);
		if (n < 0) {
			printf ("\nNúmero informado não é positivo! Informe novamente.\n\n");
		}
    }
	
	for (i=1; i<=n; i++) {
		for (j=1; j<=i; j++) {
			c++;
			printf ("%d ", c);
		}
		printf ("\n");
	} 
	
	
	return 0;
}
