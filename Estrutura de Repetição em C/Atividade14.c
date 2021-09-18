#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* A s�rie de RICCI difere da s�rie de FIBONACCI porque os dois primeiros termos
s�o fornecidos pelo usu�rio. Os demais termos s�o gerados da mesma forma que a
s�rie de FIBONACCI. Criar uma fun��o em c que imprima os N primeiros termos
da s�rie de RICCI (N ser� fornecido pelo usu�rio) e a soma dos termos impressos,
sabendo-se que para existir esta s�rie ser�o necess�rios pelo menos tr�s termos.
 */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	 
	int n1=0, n2=0, n3=0, i=0, x1=0, soma=0, soma1=0, somatorio=0;
	 
	printf ("Informe os dois primeiros n�meros da s�rie de RICCI: ");
	scanf ("%d %d", &n1, &n2);
	printf ("Informe o n�mero de termos requisitados da s�rie de RICCI (m�nimo 3): ");
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
	printf ("\nA soma dos termos impressos �: %d", soma1);
	
	
	 
	 
	
	return 0;
}
