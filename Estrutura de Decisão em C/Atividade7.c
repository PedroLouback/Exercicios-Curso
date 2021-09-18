#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Uma empresa deseja presentear seus funcionários com um bônus de 
Natal, cujo valor é definido do seguinte modo: 
a. Funcionários do sexo masculino com tempo de casa superior a 15 
anos terão direito a um bônus de 20% do seu salário; 
b. As funcionárias com tempo de casa superior a 10 anos terão direito 
a um bônus de 25% do seu salário; e 
c. os demais funcionários terão direito a um bônus de R$ 100,00. 
Faça um algoritmo que leia o código do funcionário, o sexo, o 
tempo de trabalho (em anos) e o salário. O algoritmo deve calcular 
o valor do bônus. */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	int cfuncionario, temptrabalho;
    float salario, bonus;
	char sexo;
	
	printf("Digite o código do funcionario: ");
	scanf("%d", &cfuncionario);

	printf("Digite o sexo do funcionário (M para masculino e F para feminino): ");
	scanf("\n%c", &sexo);
	
	printf("Digite o tempo de trabalho (em anos): ");
	scanf("\n%d", &temptrabalho);

	printf("Digite o salario do funcionário: ");
	scanf("\n%f", &salario);

	if (sexo=='M' && temptrabalho>15) {
    bonus=(0.2*salario);
	printf ("\nO Valor do seu bônus será de: R$%2.f", bonus);
	} else if (sexo=='F' && temptrabalho>10) {
    bonus=(0.25*salario);
	printf ("\nO Valor do seu bônus será de: R$%2.f", bonus);
	} else {
	printf ("\nO Valor do seu bônus será de R$100.00!");
}
	


	return 0;
}

