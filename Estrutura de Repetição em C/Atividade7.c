#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 1 - Lab.2 -- Deseja-se fazer uma pesquisa a respeito do consumo mensal de energia 
el�trica em uma determinada cidade. Para isso, s�o fornecidos os seguintes 
dados:
� pre�o do kWh consumido;
� n�mero do consumidor;
� quantidade de kWh consumidos durante o m�s;
� c�digo do tipo de consumidor (residencial, comercial, industrial).
O n�mero do consumidor igual a zero deve ser usado para interromper a entrada de 
dados. Fa�a um algoritmo que leia os dados descritos acima e calcule:
a. para cada consumidor, o total a pagar
b. o maior consumo verificado,
c. o menor consumo verificado,
d. o total do consumo para cada um dos tr�s tipos de consumidores,
e. a m�dia geral de consumo;
e escreva:
I. para cada consumidor, o seu n�mero e o total a pagar,
II. o que foi calculado nos itens b, c, d, e acima especificados. */

int main(int argc, char *argv[]) {
	
	setlocale (LC_ALL,"Portuguese");
	int maiorc=0, menorc=0, nconsumidor=-1;
	float precokwh=0, qtdkwhmes=0, i, totalpag, totalconsumoc=0, totalconsumor=0,totalconsumoi=0, mediageral;
	char codconsumidor; 

    for (i=0; nconsumidor!=0; i++) {
		printf("Informe seu n�mero do consumidor: ");
		scanf("%d", &nconsumidor);
			if (nconsumidor==0) {	
				break;
	} 
	printf("Informe o pre�o do kWh consumido: ");
	scanf("%f", &precokwh);
	printf("Informe a quantidade de kWh consumidos por m�s: ");
	scanf("%f", &qtdkwhmes);
	printf("Informe o c�digo do tipo do consumidor - \n(R) para residencial \n(C) para comercial \n(I) para industrial: ");
	scanf(" %c", &codconsumidor);
	
	totalpag=(precokwh*qtdkwhmes);
	printf("\nO total a pagar do consumidor %c-%d ser� de R$%.2f \n\n", codconsumidor, nconsumidor, totalpag);
	
	if(i==0){
		maiorc=qtdkwhmes;
        menorc=qtdkwhmes;
		i++;	
	} else if (qtdkwhmes>maiorc) {
		 maiorc = qtdkwhmes;
	}	else if (qtdkwhmes<menorc) {
		menorc = qtdkwhmes;
	} 	
	
	if (i==0){
		totalconsumor=qtdkwhmes;
		totalconsumoc=qtdkwhmes;
		totalconsumoi=qtdkwhmes;
		i++;
	} else if (codconsumidor=='R') {
		totalconsumor += qtdkwhmes;
	} else if (codconsumidor=='C') {
		totalconsumoc += qtdkwhmes;
	} else if (codconsumidor=='I') {
		totalconsumoi += qtdkwhmes;
	}
	
	
}
	mediageral=((totalconsumor+totalconsumoc+totalconsumoi)/3);
	
		printf ("\n|| Resultados da pesquisa ||\n");
		printf ("\nO maior consumo � %d kWh", maiorc);
		printf ("\nO menor consumo � %d kWh", menorc);
		printf ("\nO total de consumo do tipo residencial � %.0f kWh", totalconsumor);
		printf ("\nO total de consumo do tipo comercial � %.0f kWh", totalconsumoc);
		printf ("\nO total de consumo do tipo industrial � %.0f kWh", totalconsumoi);
		printf ("\nA m�dia geral de consumo � %.2f kwH", mediageral);

return 0;
}


