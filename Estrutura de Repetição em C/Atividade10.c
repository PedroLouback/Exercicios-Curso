#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Atividade 4 - Lista lab. 2 - Fa�a um programa que apresente um menu de op��es para o c�lculo das 
seguintes opera��es entre dois n�meros:
a. adi��o (op��o 1)
b. subtra��o (op��o 2)
c. multiplica��o (op��o 3)
d. divis�o (op��o 4)
e. sa�da (op��o 5)
O programa deve possibilitar ao usu�rio a escolha da opera��o desejada, a 
exibi��o do resultado e a volta ao menu de op��es. O programa s� termina 
quando for escolhida a op��o de sa�da (op��o 5). */

int main(int argc, char *argv[]) {
	setlocale (LC_ALL,"Portuguese");
	int x,y,i,opcao=0;
	float soma, subtracao, multiplicacao, divisao;
	
	printf("Informe dois n�meros: ");
	scanf("%d %d", &x, &y);
	
	for (i=0;opcao!=5;i++) {
	printf("Escolha abaixo qual opera��o deseja ser feita: \n(1)Adi��o;\n(2)Subtra��o;\n(3)Multipli��o;\n(4)Divis�o;\n(5)Sa�da.");	
	scanf("%d", &opcao);
	
	if (opcao==1) {
		soma=(x+y);
		printf("\nOp��o 1: A soma entre n�meros informados � de: %.0f \n", soma);
	} if (opcao==2) {
		subtracao=(x-y);
		printf("\nOp��o 2: A subtra��o entre n�meros informados � de: %.0f \n", subtracao);
	} if (opcao==3) {
		multiplicacao=(x*y);
		printf("\nOp��o 3: A multiplica��o entre n�meros informados � de: %.0f \n", multiplicacao);
	} if (opcao==4) {
		divisao=(x/y);
		printf("\nOp��o 4: A divis�o entre n�meros informados � de: %.2f \n", divisao);
	} if (opcao==5) {
		printf("\nOp��o 5 de sa�da escolhida! Finalizando o programa... \n\n", divisao);
	}
}
	
	
	
	return 0;
}
