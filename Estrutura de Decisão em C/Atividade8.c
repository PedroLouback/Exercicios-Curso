#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Faça um programa que permita que o usuário escolha que tipo de média 
deseja calcular a partir de três notas. A função deve receber as 3 notas e 
a opção de média a ser calculada de acordo com as fórmulas abaixo e 
deve retornar o valor da média: */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	float mediaP, mediaA, mediaH, n1, n2, n3;
	char opmedia;


	printf("Digite 3 numeros para serem calculados de acordo com a média escolhida abaixo: ");
    scanf("%f %f %f", &n1, &n2, &n3);
	printf("Escolha a média que deseja calcular: (P) para ponderada, (A) para aritmética e (H) para harmônica: ");
	scanf("\n%c", &opmedia);

	if (opmedia=='P') {
		mediaP = (((n1*3)+ (n2*3) + (n3*4)) / (3+3+4));
		printf("O valor da sua média escolhida (Ponderada) foi: %f\n", mediaP);
	} else if (opmedia=='A') {
		mediaA = ((n1+n2+n3) / 3);
		printf("O valor da sua média escolhida (Aritmética) foi: %f\n", mediaA);
	} else if (opmedia=='H') {
		mediaH = (3/(1/n1 + 1/n2 + 1/n3));
		printf("O valor da sua média escolhida (Harmônica) foi: %f\n", mediaH);
	}
	
	
	return 0;
}

