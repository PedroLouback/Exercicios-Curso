#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Fa?a um algoritmo que l? o n?mero de um vendedor de uma empresa, 
seu sal?rio fixo e o total de vendas por ele efetuadas. Cada vendedor 
recebe um sal?rio fixo, mais uma comiss?o proporcional ?s vendas por 
ele efetuadas. A comiss?o ? de 3% sobre o total de vendas at? 10.000 e 
5% sobre o que ultrapassa este valor. Escrever o n?mero do vendedor, o 
total de suas vendas, seu sal?rio fixo e seu sal?rio total. */

int main(int argc, char *argv[]) {
	
	setlocale (LC_ALL,"Portuguese");
	float salario, totalvendas, comissao, salariototal, comissaoadc;
    int nvendedor; 

    printf("Digite o número do vendedor: ");
	scanf("%d", &nvendedor);
	printf("Digite o salario fixo do vendedor %d: ", nvendedor);
	scanf("%f", &salario);
	printf("Digite o total de vendas efetuadas pelo vendedor %d: ", nvendedor);
	scanf("%f", &totalvendas);

    if (totalvendas<=10000) {
		comissao=(salario+(0.03*totalvendas));
	} else if (totalvendas>10000) {
    comissaoadc=((totalvendas-10000)*0.05);
	comissao= ((salario+(0.03*10000)+comissaoadc));
	}

    printf("O número do vendedor é %d \n", nvendedor);
	printf("O seu total de vendas é de: R$%.2f \n", totalvendas);
	printf("O seu salário fixo é de: R$%.2f \n", salario);
	printf("O seu salário total é de: R$%.2f", comissao);
	
	return 0;
}


