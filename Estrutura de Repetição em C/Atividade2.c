#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*  Um determinado material radioativo perde metade de sua massa a cada
50 segundos. Este tempo é chamado na físico-química de MEIA-VIDA.
Dada a massa inicial, em gramas, faça um algoritmo que determine o
tempo necessário para que essa massa se torne menor que 0.5 gramas.
Ao final do algoritmo escreva a massa inicial e o tempo calculado em
horas, minutos e segundos.
 */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	
	float Mfinal, Minicial;
	int i, TempI, TempHr, TempMin, TempSeg;
	
	printf("Informe a massa do material em gramas: ");
	scanf("%f", &Minicial);
	
	Mfinal=Minicial;
	TempI=0;
   for (i=0;Mfinal>=0.5;i++) {
		Mfinal=Mfinal/2;
	} 
	TempI=i*50;
	
	TempHr=(TempI/3600);
	TempMin=(TempI%3600)/60; 
	TempSeg=(TempI%3600)%60;
	
	printf ("\nA massa inicial foi de %.2f gramas.\n", Minicial);
	printf("\nO tempo calculado de meia vida foi de %d horas:%d minutos:%d segundos.\n", TempHr, TempMin, TempSeg);
	
	return 0;
}
