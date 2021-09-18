#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 1 - Lab.2 -- Deseja-se fazer uma pesquisa a respeito do consumo mensal de energia 
elétrica em uma determinada cidade. Para isso, são fornecidos os seguintes 
dados:
• preço do kWh consumido;
• número do consumidor;
• quantidade de kWh consumidos durante o mês;
• código do tipo de consumidor (residencial, comercial, industrial).
O número do consumidor igual a zero deve ser usado para interromper a entrada de 
dados. Faça um algoritmo que leia os dados descritos acima e calcule:
a. para cada consumidor, o total a pagar
b. o maior consumo verificado,
c. o menor consumo verificado,
d. o total do consumo para cada um dos três tipos de consumidores,
e. a média geral de consumo;
e escreva:
I. para cada consumidor, o seu número e o total a pagar,
II. o que foi calculado nos itens b, c, d, e acima especificados. */

int main(int argc, char *argv[]) {
	
	setlocale (LC_ALL,"Portuguese");
	int maiorc=0, menorc=0, nconsumidor=-1;
	float precokwh=0, qtdkwhmes=0, i, totalpag, totalconsumoc=0, totalconsumor=0,totalconsumoi=0, mediageral;
	char codconsumidor; 

    for (i=0; nconsumidor!=0; i++) {
		printf("Informe seu número do consumidor: ");
		scanf("%d", &nconsumidor);
			if (nconsumidor==0) {	
				break;
	} 
	printf("Informe o preço do kWh consumido: ");
	scanf("%f", &precokwh);
	printf("Informe a quantidade de kWh consumidos por mês: ");
	scanf("%f", &qtdkwhmes);
	printf("Informe o código do tipo do consumidor - \n(R) para residencial \n(C) para comercial \n(I) para industrial: ");
	scanf(" %c", &codconsumidor);
	
	totalpag=(precokwh*qtdkwhmes);
	printf("\nO total a pagar do consumidor %c-%d será de R$%.2f \n\n", codconsumidor, nconsumidor, totalpag);
	
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
		printf ("\nO maior consumo é %d kWh", maiorc);
		printf ("\nO menor consumo é %d kWh", menorc);
		printf ("\nO total de consumo do tipo residencial é %.0f kWh", totalconsumor);
		printf ("\nO total de consumo do tipo comercial é %.0f kWh", totalconsumoc);
		printf ("\nO total de consumo do tipo industrial é %.0f kWh", totalconsumoi);
		printf ("\nA média geral de consumo é %.2f kwH", mediageral);

return 0;
}


