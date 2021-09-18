#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 
Fa�a um algoritmo para uma caixa registradora. A m�quina recebe os produtos
comprados e a quantidade de cada um deles e retorna o valor total da compra. A
funcion�ria dever� entrar com o c�digo do produto e a quantidade. A tabela abaixo
mostra os produtos existentes. Quando a funcion�ria terminar de entrar os produtos ela
dever� digitar c�digo do produto = 0 (zero). Neste instante, a caixa registradora dever�
retornar o valor total da compra. Lembre-se de fazer a verifica��o de erros checando se
a funcion�ria digitou os c�digos corretamente.
 */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int codproduto=1, quantidade, valortotal, i;
	float preco, quantidadet;
	
	while (codproduto != 0) {
		printf ("\nInforme o c�digo do produto comprado: ");
		scanf ("%d", &codproduto);
		if (codproduto == 0){
			break;
		} 
		printf ("\nInforme a quantidade do produto %d: ", codproduto);
		scanf ("%d", &quantidade);
	
		switch (codproduto) {
			case 101:
				printf("\n|| Escolhido %d - ADO�ANTE LIQUIDO FINN 65 ML || Valor: R$7,89 ||\n", quantidade);
				quantidadet += (7.89*quantidade);
				break;
			case 102:
				printf("\n|| Escolhido %d - ADO�ANTE LIQUIDO STEVIA 80 ML || Valor: R$4,49 ||\n", quantidade);
				quantidadet += (4.49*quantidade);
				break;
			case 301:
				printf("\n||  Escolhido %d - AZEITE PORTGU�S 200 ML || Valor: R$4,99 ||\n", quantidade);
				quantidadet += (4.99*quantidade);
				break;
			case 401:
				printf("\n||  Escolhido %d - BATATA TRADICIONAL CONGELADA MCCAIN 720 GR 65 ML || Valor: R$1,39 ||\n", quantidade);
				quantidadet += (1.39*quantidade);
				break;
			case 403:
				printf("\n||  Escolhido %d - BISCOITO RECHEADO BONO 200 GR || Valor: R$1,09 ||\n", quantidade);
				quantidadet += (1.09*quantidade);
				break;
			case 501:
				printf("\n||  Escolhido %d - AGUARDENTE VELHO BARREIRO 910 ML || Valor: R$2,98 ||\n", quantidade);
				quantidadet += (2.98*quantidade);
				break;
			case 502:
				printf("\n||  Escolhido %d - CERVEJA MILLER LONG NECK 355 ML || Valor: R$1,29 ||\n", quantidade);
				quantidadet += (1.29*quantidade);
				break;
			case 503:
				printf("\n||  Escolhido %d - CERVEJA KAISER LATA OU LONG NECK UNID. || Valor: R$0,78 ||\n", quantidade);
				quantidadet += (0.78*quantidade);
				break;
			case 504:
				printf("\n||  Escolhido %d - CERVEJA BOHEMIA LATA OU LONG NECK || Valor: R$1,25 ||\n", quantidade);
				quantidadet += (1.25*quantidade);
				break;								
			case 505:
				printf("\n||  Escolhido %d - CERVEJA ANTARCTICA LATA OU LONG NECK UNID. || Valor: R$0,78 ||\n", quantidade);
				quantidadet += (0.78*quantidade);
				break;
			case 506:
				printf("\n||  Escolhido %d - CERVEJA BRAHMA LATA OU LONG NECK || Valor: R$0,89 ||\n", quantidade);
				quantidadet += (0.89*quantidade);
				break;
			default:
				printf ("\nC�digo Inv�lido, Informe Novamente!\n");
				break;	
			} 
		}
		
		printf ("O valor total da compra ser� de R$%.2f", quantidadet);

	return 0;
}
