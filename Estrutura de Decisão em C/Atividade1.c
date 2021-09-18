#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/* Faça um algoritmo para ler e imprimir três números. Se o primeiro for 
positivo, imprimir sua raiz quadrada, caso contrário, imprimir o seu 
quadrado; se o segundo número for maior que 10 e menor que 100, 
imprimir a mensagem : “Número entre 10 e 100. Intervalo permitido”; se o 
terceiro número for menor que o segundo, calcular e imprimir a diferença 
entre eles, caso contrário, calcular e imprimir a soma deles */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	float x, y, z, raizquadrada, soma, diferenca;
    int nquadrado; 

	printf("Digite três números: ");
    scanf("%f %f %f", &x, &y, &z);

	if (x>=1) {
	raizquadrada=sqrt(x);
    printf("Valor da raiz quadrada: %.2f \n",raizquadrada);   
    } else {
	nquadrado=pow(x, 2);
	printf("Seu número ao quadrado é : %d", nquadrado);
	}
	
	if (y>10 && y<100){
		printf("\nNúmero entre 10 e 100. Intervalo permitido");
	} else
		printf("\nNúmero não esta entre 10 e 100. Intervalo não permitido");
	
	if (z<y) {
		diferenca=(y-z);
		printf("\nDiferença entre o segundo e terceiro número: %.1f", diferenca);
	} else {
	soma=(z+y); 
		printf("\nSoma entre o segundo e terceiro número: %.1f", soma);
}



	return 0;
}

