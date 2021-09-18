#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Supondo que a popula��o da Rep�blica Democr�tica dos Bruzundangas seja da 
ordem de 90.000.000 (noventa milh�es) de habitantes com uma taxa anual de 
crescimento de 3% e que a popula��o de um pa�s Uni�o Federalista do Milano 
seja de aproximadamente 200.000.000 (duzentos milh�es) de habitantes com 
uma taxa anual de crescimento de 1,5%. Fa�a um algoritmo que calcule e 
escreva o n�mero de anos necess�rios para que a popula��o dos Bruzundangas 
alcance ou ultrapasse a popula��o dos Milanos. Suponha que ser�o mantidas 
essas taxas de crescimento */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	int i, popm, popb;
	
	popm=200000000;
	popb=90000000;
	
	for (i=0;popb<popm;i++) {
		if (popb<popm) {
			popb+=(popb*0.03);
			popm+=(popm*0.015); 
		}
	} 
	printf ("  � necessario %d anos para que a popula��o alcace ou ultrapasse � dos Milanos! ", i);
	
	
	return 0;
}
