#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* O hotel Xulambs� cobra R$ 95,00 a di�ria e mais uma taxa de servi�os. 
A taxa de servi�os � de: 2,50 por dia, se n�mero de di�rias < 15; 1,50 por 
dia, se n�mero de di�rias = 15; e 0,50 por dia, se n�mero de di�rias > 15. 
Fa�a um algoritmo que l� o n�mero de di�rias e calcula o total a ser pago 
pelo cliente
 */

int main(int argc, char *argv[]) {
	setlocale (LC_ALL,"Portuguese");
	float totalpago;
	int diaria;
	
	printf("Informe o n�mero de di�rias: ");
	scanf("%d", &diaria);
	
	if (diaria<15) {
		totalpago=(95*diaria+(2.50*diaria));
		printf("O total a ser pago � de: R$%.2f", totalpago);
	} else if (diaria==15) {
		totalpago=(95*diaria+(1.50*diaria));
		printf("O total a ser pago � de: R$%.2f", totalpago);
	} else if (diaria>15) {
		totalpago=(95*diaria+(0.50*diaria));
		printf("O total a ser pago � de: R$%.2f", totalpago);
	}
	
   
	return 0;
}

