#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Fa�a um programa que permita que o usu�rio escolha que tipo de m�dia 
deseja calcular a partir de tr�s notas. A fun��o deve receber as 3 notas e 
a op��o de m�dia a ser calculada de acordo com as f�rmulas abaixo e 
deve retornar o valor da m�dia: */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	float mediaP, mediaA, mediaH, n1, n2, n3;
	char opmedia;


	printf("Digite 3 numeros para serem calculados de acordo com a m�dia escolhida abaixo: ");
    scanf("%f %f %f", &n1, &n2, &n3);
	printf("Escolha a m�dia que deseja calcular: (P) para ponderada, (A) para aritm�tica e (H) para harm�nica: ");
	scanf("\n%c", &opmedia);

	if (opmedia=='P') {
		mediaP = (((n1*3)+ (n2*3) + (n3*4)) / (3+3+4));
		printf("O valor da sua m�dia escolhida (Ponderada) foi: %f\n", mediaP);
	} else if (opmedia=='A') {
		mediaA = ((n1+n2+n3) / 3);
		printf("O valor da sua m�dia escolhida (Aritm�tica) foi: %f\n", mediaA);
	} else if (opmedia=='H') {
		mediaH = (3/(1/n1 + 1/n2 + 1/n3));
		printf("O valor da sua m�dia escolhida (Harm�nica) foi: %f\n", mediaH);
	}
	
	
	return 0;
}

