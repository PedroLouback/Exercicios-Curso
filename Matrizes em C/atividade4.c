#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#define TAM 5


/* Faça um programa que preencha uma matriz de string com os modelos de cinco
carros (exemplos de modelos: Corolla, Uno, Prisma, etc.). Em seguida, preencha
um vetor com o consumo desses carros, isto é, quantos quilômetros cada um
deles faz com um litro de combustível. Calcule e mostre: (a) O modelo de carro
mais econômico; (b) Quantos litros de combustível cada um dos carros
cadastrados consome para percorrer uma distância de 1.000 quilômetros
 */

int main(int argc, char const *argv[])
{
    SetConsoleOutputCP(CP_UTF8);
    
    int i, consumo[TAM], maior=0, maior_consumo=0;
    char modelos[TAM][80];
    
    for(i=0; i<TAM; i++){
        fflush(stdin);
        printf("Informe o modelo %d de algum carro: ", i+1);
        gets(modelos[i]);
	    strtok(modelos, "\n");
    }
    printf("\n");
    for(i=0; i<TAM; i++){
        printf("Informe o consumo do %s (quilômetros por litro): ", modelos[i]);
        scanf("%d", &consumo[i]);
    }

    maior = consumo[0];	
	for (i = 0; i < TAM; i++) {
		if ( consumo[i] > maior) {
			maior = consumo[i];
            maior_consumo = i;	
		}	
    }

    printf("\n\n==| INFORMAÇÕES SOBRE OS MODELOS CADASTRADOS: |==");
    printf("\n(a) O modelo de carro mais econômico é o %s.", modelos[maior_consumo]);
    printf("\n\n(b) ");
    for (i = 0;i<TAM; i++){
        printf("O modelo %s consome %.2f litros para percorrer 1.000Km.", modelos[i], (float)1000/consumo[i]);
        printf("\n");
    }


    return 0;
}
