#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/* Fa�a um algoritmo que receba um n�mero real x e um inteiro positivo n e calcule o
valor aproximado do co-seno de x calculando-se os n termos da s�rie abaixo: 

Retorne o valor do co-seno calculado com n termos. Retorne qual a diferen�a entre o valor
calculado com n termos e o valor da fun��o COS(X) presente na biblioteca MATH.H.
*/

double fat(int n) {
	int i=0;
	double fat = 1;
	for (i=n;i>1;i--)
	{
		fat=fat*i;
	}
	return fat;
}
int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	
	double angulo,rad;
	int i = 0, n, pote = 0;
	double cosseno = 0;
	
	
	printf ("Informe o �ngulo em graus: ");
	scanf ("%lf", &angulo);
	printf ("Informe o n�mero de termos: ");
	scanf ("%d", &n);
	
	rad = angulo * M_PI / 180;
	
	while (i < n) {
		cosseno+=pow(-1,i)*pow(rad,pote)/fat(pote);
		pote+=2;
		i++;
	}
	printf ("\nO valor do cosseno calculado com %d termos �: %lf", n, cosseno);
	printf ("\nO valor do cosseno na biblioteca MATH.H � cos(%.0lf)= %lf", angulo,cos(angulo));
	printf ("\nA diferen�a entre o valor calculado com os termos e o valor da biblioteca �: %lf", (cosseno-cos(angulo)));
	
	
	return 0;
}
