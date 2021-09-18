#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/* Fa�a um algoritmo para ler e imprimir tr�s n�meros. Se o primeiro for 
positivo, imprimir sua raiz quadrada, caso contr�rio, imprimir o seu 
quadrado; se o segundo n�mero for maior que 10 e menor que 100, 
imprimir a mensagem : �N�mero entre 10 e 100. Intervalo permitido�; se o 
terceiro n�mero for menor que o segundo, calcular e imprimir a diferen�a 
entre eles, caso contr�rio, calcular e imprimir a soma deles */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	float x, y, z, raizquadrada, soma, diferenca;
    int nquadrado; 

	printf("Digite tr�s n�meros: ");
    scanf("%f %f %f", &x, &y, &z);

	if (x>=1) {
	raizquadrada=sqrt(x);
    printf("Valor da raiz quadrada: %.2f \n",raizquadrada);   
    } else {
	nquadrado=pow(x, 2);
	printf("Seu n�mero ao quadrado � : %d", nquadrado);
	}
	
	if (y>10 && y<100){
		printf("\nN�mero entre 10 e 100. Intervalo permitido");
	} else
		printf("\nN�mero n�o esta entre 10 e 100. Intervalo n�o permitido");
	
	if (z<y) {
		diferenca=(y-z);
		printf("\nDiferen�a entre o segundo e terceiro n�mero: %.1f", diferenca);
	} else {
	soma=(z+y); 
		printf("\nSoma entre o segundo e terceiro n�mero: %.1f", soma);
}



	return 0;
}

