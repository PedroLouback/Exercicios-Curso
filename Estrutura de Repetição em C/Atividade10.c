#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Atividade 4 - Lista lab. 2 - Faça um programa que apresente um menu de opções para o cálculo das 
seguintes operações entre dois números:
a. adição (opção 1)
b. subtração (opção 2)
c. multiplicação (opção 3)
d. divisão (opção 4)
e. saída (opção 5)
O programa deve possibilitar ao usuário a escolha da operação desejada, a 
exibição do resultado e a volta ao menu de opções. O programa só termina 
quando for escolhida a opção de saída (opção 5). */

int main(int argc, char *argv[]) {
	setlocale (LC_ALL,"Portuguese");
	int x,y,i,opcao=0;
	float soma, subtracao, multiplicacao, divisao;
	
	printf("Informe dois números: ");
	scanf("%d %d", &x, &y);
	
	for (i=0;opcao!=5;i++) {
	printf("Escolha abaixo qual operação deseja ser feita: \n(1)Adição;\n(2)Subtração;\n(3)Multiplição;\n(4)Divisão;\n(5)Saída.");	
	scanf("%d", &opcao);
	
	if (opcao==1) {
		soma=(x+y);
		printf("\nOpção 1: A soma entre números informados é de: %.0f \n", soma);
	} if (opcao==2) {
		subtracao=(x-y);
		printf("\nOpção 2: A subtração entre números informados é de: %.0f \n", subtracao);
	} if (opcao==3) {
		multiplicacao=(x*y);
		printf("\nOpção 3: A multiplicação entre números informados é de: %.0f \n", multiplicacao);
	} if (opcao==4) {
		divisao=(x/y);
		printf("\nOpção 4: A divisão entre números informados é de: %.2f \n", divisao);
	} if (opcao==5) {
		printf("\nOpção 5 de saída escolhida! Finalizando o programa... \n\n", divisao);
	}
}
	
	
	
	return 0;
}
