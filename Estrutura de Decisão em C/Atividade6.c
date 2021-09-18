#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* A empresa Eficaz resolveu conceder aumento diferenciado para seus 
funcionários de acordo com a tabela abaixo. Faça um algoritmo que leia 
o salário atual de um funcionário. Escreva então o seu salário atual, o 
percentual que receberá de aumento, o valor deste aumento e o novo 
salário. */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	float salario, paumento, vaumento, nsalario;

	printf ("Digite o seu salário: ");
	scanf ("%f", &salario);
    
	if (salario>=1000 && salario<1500) {
		printf("O percentual que receberá de aumento é de 100%% \n");
		paumento=(1.0);
		vaumento=(salario*paumento);
	}
	if (salario>=1500 && salario<2500) {
		printf("O percentual que receberá de aumento é de 90%% \n");
		paumento=(0.9);
		vaumento=(salario*paumento);
	}
	if (salario>=2500 && salario<3000) {
		printf("O percentual que receberá de aumento é de 80%% \n");
		paumento=(0.8);
		vaumento=(salario*paumento);
	}
	if (salario>=3000 && salario<3500) {
		printf("O percentual que receberá de aumento é de 70%% \n");
		paumento=(0.7);
		vaumento=(salario*paumento);
	}
	if (salario>=3500 && salario<4000) {
		printf("O percentual que receberá de aumento é de 60%% \n");
		paumento=(0.6);
		vaumento=(salario*paumento);
	}
	if (salario>=4000) {
		printf("O percentual que receberá de aumento é de 50%% \n");
		paumento=(0.5);
		vaumento=(salario*paumento);
	}

    nsalario=(salario+vaumento);

	printf ("Seu salário é: R$%.2f\n", salario);
	printf ("O valor de aumento será de: R$%.2f\n", vaumento);
	printf ("Seu novo salario é: R$%2.f\n", nsalario);

	return 0;
}

