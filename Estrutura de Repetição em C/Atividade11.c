#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/* Fa�a um algoritmo que receba um n�mero real x (que representa um angulo) e um
inteiro positivo n e calcule o valor aproximado do seno de x calculando-se os n termos
da s�rie abaixo:
X deve estar em radianos. Retorne o valor do seno calculado com n termos. Retorne qual a
diferen�a entre o valor calculado com n termos e o valor da fun��o sin(X) presente na
biblioteca math.h.
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
	int i = 1, n, pote = 1;
	double seno = 0;
	
	printf ("Informe o �ngulo em graus: ");
	scanf ("%lf", &angulo);
	printf ("Informe o n�mero de termos: ");
	scanf ("%d", &n);
	
	rad = angulo * M_PI / 180;
	
	while (i < n) {
		seno+=pow( -1 ,i)*pow(rad,pote)/ fat(pote);
		pote+=2;
		i++;
		}	 
		
	printf ("\nO valor do seno calculado com %d termos �: %lf", n, seno);
	printf ("\nO valor do seno na biblioteca MATH.H � sen(%.0lf)= %lf", angulo,sin(angulo));
	printf ("\nA diferen�a entre o valor calculado e o valor da biblioteca �: %lf", (seno-sin(angulo)));
	
	
	return 0;
}
