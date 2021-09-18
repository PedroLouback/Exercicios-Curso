#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Um posto de combust�veis deseja determinar qual de seus produtos tem
a prefer�ncia de seus clientes. Fa�a um algoritmo para ler o tipo de
combust�vel abastecido (codificado da seguinte forma: 1.�lcool 2.Gasolina 3.Diesel 4.Fim). 
Caso o usu�rio informe um c�digo inv�lido (fora da faixa de 1 a 4) deve ser solicitado um 
novo c�digo (at� que seja v�lido). Ao ser informado o c�digo do combust�vel, o seu respectivo nome
deve ser impresso na tela. O programa ser� encerrado quando o c�digo
informado for o n�mero 4 escrevendo ent�o a mensagem : "MUITO OBRIGADO" e a quantidade de clientes que abasteceram cada tipo de
combust�vel.*/

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int tcombustivel=0, i, tipo1=0, tipo2=0, tipo3=0;
	
	for (i=0;tcombustivel!=4; i++) {
		printf ("\nInforme o c�digo do combust�vel abastecido \n(1)-�lcool; \n(2)-Gasolina; \n(3)-Diesel; \n(4)-Encerrar o programa: ");
		scanf ("%d", &tcombustivel);
		
		if (tcombustivel==1) {
			printf("\n ||O tipo de combust�vel escolhido foi �lcool.|| \n");
			tipo1++;
		}	else if (tcombustivel==2) {
				printf("\n ||O tipo de combust�vel escolhido foi Gasolina.|| \n");
				tipo2++;
		} 	else if (tcombustivel==3) {
				printf("\n ||O tipo de combust�vel escolhido foi Diesel.|| \n");
				tipo3++;
		} 	else if (tcombustivel==4) {
				printf ("\n ||MUITO OBRIGADO||\n");
		}	else {
				printf("\n ||C�digo incorreto, insira um c�digo registrado no sitema.|| \n");
		}
						
}	
	printf ("\nO total de clientes que abasteceram o tipo de combust�vel 1 - �lcool, foi de: %d\n", tipo1);
	printf ("\nO total de clientes que abasteceram o tipo de combust�vel 2 - Gasolina, foi de: %d\n", tipo2);
	printf ("\nO total de clientes que abasteceram o tipo de combust�vel 3 - Diesel, foi de: %d\n", tipo3);	

	


	
	return 0;
}
