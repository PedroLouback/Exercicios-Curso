#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Fa�a um algoritmo que receba tr�s n�meros e mostre o maior */

int main(int argc, char *argv[]) {
	
	setlocale (LC_ALL,"Portuguese");
    int n1, n2, n3, maior1, maior2;
    
    printf("Digite 3 n�meros: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    
    if (n1>n2) {
    maior1=n1;
	} else { 
	maior1=n2;
	}
	if (maior1>n3) {
		maior2=maior1;
	} else { 
	maior2=n3;
	}
	
	printf ("O maior n�mero entre eles � %d", maior2);
	return 0;
}
