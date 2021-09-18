#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/* Faça um algoritmo que calcule o seguinte somatório: */
int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");

float somatorio=0, denominador, numerador;
int i, j;

for (i=0,j=15;i<15; i++, j--) {
	numerador=pow(2,i);
	denominador=pow(j,2);
    somatorio+=(numerador / denominador);
}

printf("O resultado do somatorio é: %.2f", somatorio);
	return 0;
}
