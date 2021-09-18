#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Faça um algoritmo que receba três números e mostre o maior */

int main(int argc, char *argv[]) {
	
	setlocale (LC_ALL,"Portuguese");
    int n1, n2, n3, maior1, maior2;
    
    printf("Digite 3 números: ");
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
	
	printf ("O maior número entre eles é %d", maior2);
	return 0;
}
