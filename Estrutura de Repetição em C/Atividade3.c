#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Um posto de combustíveis deseja determinar qual de seus produtos tem
a preferência de seus clientes. Faça um algoritmo para ler o tipo de
combustível abastecido (codificado da seguinte forma: 1.Álcool 2.Gasolina 3.Diesel 4.Fim). 
Caso o usuário informe um código inválido (fora da faixa de 1 a 4) deve ser solicitado um 
novo código (até que seja válido). Ao ser informado o código do combustível, o seu respectivo nome
deve ser impresso na tela. O programa será encerrado quando o código
informado for o número 4 escrevendo então a mensagem : "MUITO OBRIGADO" e a quantidade de clientes que abasteceram cada tipo de
combustível.*/

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int tcombustivel=0, i, tipo1=0, tipo2=0, tipo3=0;
	
	for (i=0;tcombustivel!=4; i++) {
		printf ("\nInforme o código do combustível abastecido \n(1)-Álcool; \n(2)-Gasolina; \n(3)-Diesel; \n(4)-Encerrar o programa: ");
		scanf ("%d", &tcombustivel);
		
		if (tcombustivel==1) {
			printf("\n ||O tipo de combustível escolhido foi Álcool.|| \n");
			tipo1++;
		}	else if (tcombustivel==2) {
				printf("\n ||O tipo de combustível escolhido foi Gasolina.|| \n");
				tipo2++;
		} 	else if (tcombustivel==3) {
				printf("\n ||O tipo de combustível escolhido foi Diesel.|| \n");
				tipo3++;
		} 	else if (tcombustivel==4) {
				printf ("\n ||MUITO OBRIGADO||\n");
		}	else {
				printf("\n ||Código incorreto, insira um código registrado no sitema.|| \n");
		}
						
}	
	printf ("\nO total de clientes que abasteceram o tipo de combustível 1 - Álcool, foi de: %d\n", tipo1);
	printf ("\nO total de clientes que abasteceram o tipo de combustível 2 - Gasolina, foi de: %d\n", tipo2);
	printf ("\nO total de clientes que abasteceram o tipo de combustível 3 - Diesel, foi de: %d\n", tipo3);	

	


	
	return 0;
}
