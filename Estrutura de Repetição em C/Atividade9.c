#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Supondo que a população da República Democrática dos Bruzundangas seja da 
ordem de 90.000.000 (noventa milhões) de habitantes com uma taxa anual de 
crescimento de 3% e que a população de um país União Federalista do Milano 
seja de aproximadamente 200.000.000 (duzentos milhões) de habitantes com 
uma taxa anual de crescimento de 1,5%. Faça um algoritmo que calcule e 
escreva o número de anos necessários para que a população dos Bruzundangas 
alcance ou ultrapasse a população dos Milanos. Suponha que serão mantidas 
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
	printf ("  É necessario %d anos para que a população alcace ou ultrapasse à dos Milanos! ", i);
	
	
	return 0;
}
