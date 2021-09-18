#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* A empresa Eficaz resolveu conceder aumento diferenciado para seus 
funcion�rios de acordo com a tabela abaixo. Fa�a um algoritmo que leia 
o sal�rio atual de um funcion�rio. Escreva ent�o o seu sal�rio atual, o 
percentual que receber� de aumento, o valor deste aumento e o novo 
sal�rio. */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	float salario, paumento, vaumento, nsalario;

	printf ("Digite o seu sal�rio: ");
	scanf ("%f", &salario);
    
	if (salario>=1000 && salario<1500) {
		printf("O percentual que receber� de aumento � de 100%% \n");
		paumento=(1.0);
		vaumento=(salario*paumento);
	}
	if (salario>=1500 && salario<2500) {
		printf("O percentual que receber� de aumento � de 90%% \n");
		paumento=(0.9);
		vaumento=(salario*paumento);
	}
	if (salario>=2500 && salario<3000) {
		printf("O percentual que receber� de aumento � de 80%% \n");
		paumento=(0.8);
		vaumento=(salario*paumento);
	}
	if (salario>=3000 && salario<3500) {
		printf("O percentual que receber� de aumento � de 70%% \n");
		paumento=(0.7);
		vaumento=(salario*paumento);
	}
	if (salario>=3500 && salario<4000) {
		printf("O percentual que receber� de aumento � de 60%% \n");
		paumento=(0.6);
		vaumento=(salario*paumento);
	}
	if (salario>=4000) {
		printf("O percentual que receber� de aumento � de 50%% \n");
		paumento=(0.5);
		vaumento=(salario*paumento);
	}

    nsalario=(salario+vaumento);

	printf ("Seu sal�rio �: R$%.2f\n", salario);
	printf ("O valor de aumento ser� de: R$%.2f\n", vaumento);
	printf ("Seu novo salario �: R$%2.f\n", nsalario);

	return 0;
}

