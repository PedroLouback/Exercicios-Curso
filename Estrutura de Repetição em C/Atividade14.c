#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* A série de RICCI difere da série de FIBONACCI porque os dois primeiros termos
são fornecidos pelo usuário. Os demais termos são gerados da mesma forma que a
série de FIBONACCI. Criar uma função em c que imprima os N primeiros termos
da série de RICCI (N será fornecido pelo usuário) e a soma dos termos impressos,
sabendo-se que para existir esta série serão necessários pelo menos três termos.
 */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	 
	int n1=0, n2=0, n3=0, i=0, x1=0, soma=0, soma1=0, somatorio=0;
	 
	printf ("Informe os dois primeiros números da série de RICCI: ");
	scanf ("%d %d", &n1, &n2);
	printf ("Informe o número de termos requisitados da série de RICCI (mínimo 3): ");
	scanf ("%d", &n3);
	printf ("%d %d ", n1, n2);
	somatorio=(n1+n2);
	 
	for (i=2;i<n3;i++) {
	 	x1=(n1+n2);
	 	n1=n2;
	 	n2=x1;
	 	soma+=n2;
	 	printf("%d ", n2);
	 } printf("\n");
	 soma1=(soma+somatorio);
	printf ("\nA soma dos termos impressos é: %d", soma1);
	
	
	 
	 
	
	return 0;
}
