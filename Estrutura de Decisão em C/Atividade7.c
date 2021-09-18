#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Uma empresa deseja presentear seus funcion�rios com um b�nus de 
Natal, cujo valor � definido do seguinte modo: 
a. Funcion�rios do sexo masculino com tempo de casa superior a 15 
anos ter�o direito a um b�nus de 20% do seu sal�rio; 
b. As funcion�rias com tempo de casa superior a 10 anos ter�o direito 
a um b�nus de 25% do seu sal�rio; e 
c. os demais funcion�rios ter�o direito a um b�nus de R$ 100,00. 
Fa�a um algoritmo que leia o c�digo do funcion�rio, o sexo, o 
tempo de trabalho (em anos) e o sal�rio. O algoritmo deve calcular 
o valor do b�nus. */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	int cfuncionario, temptrabalho;
    float salario, bonus;
	char sexo;
	
	printf("Digite o c�digo do funcionario: ");
	scanf("%d", &cfuncionario);

	printf("Digite o sexo do funcion�rio (M para masculino e F para feminino): ");
	scanf("\n%c", &sexo);
	
	printf("Digite o tempo de trabalho (em anos): ");
	scanf("\n%d", &temptrabalho);

	printf("Digite o salario do funcion�rio: ");
	scanf("\n%f", &salario);

	if (sexo=='M' && temptrabalho>15) {
    bonus=(0.2*salario);
	printf ("\nO Valor do seu b�nus ser� de: R$%2.f", bonus);
	} else if (sexo=='F' && temptrabalho>10) {
    bonus=(0.25*salario);
	printf ("\nO Valor do seu b�nus ser� de: R$%2.f", bonus);
	} else {
	printf ("\nO Valor do seu b�nus ser� de R$100.00!");
}
	


	return 0;
}

