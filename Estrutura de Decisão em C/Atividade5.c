#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* O hotel Xulambs® cobra R$ 95,00 a diária e mais uma taxa de serviços. 
A taxa de serviços é de: 2,50 por dia, se número de diárias < 15; 1,50 por 
dia, se número de diárias = 15; e 0,50 por dia, se número de diárias > 15. 
Faça um algoritmo que lê o número de diárias e calcula o total a ser pago 
pelo cliente
 */

int main(int argc, char *argv[]) {
	setlocale (LC_ALL,"Portuguese");
	float totalpago;
	int diaria;
	
	printf("Informe o número de diárias: ");
	scanf("%d", &diaria);
	
	if (diaria<15) {
		totalpago=(95*diaria+(2.50*diaria));
		printf("O total a ser pago é de: R$%.2f", totalpago);
	} else if (diaria==15) {
		totalpago=(95*diaria+(1.50*diaria));
		printf("O total a ser pago é de: R$%.2f", totalpago);
	} else if (diaria>15) {
		totalpago=(95*diaria+(0.50*diaria));
		printf("O total a ser pago é de: R$%.2f", totalpago);
	}
	
   
	return 0;
}

