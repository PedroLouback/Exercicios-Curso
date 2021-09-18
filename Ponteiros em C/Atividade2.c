#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define TAM 5

/* Crie um programa que contenha um vetor de inteiros contendo 5 elementos.
Utilizando apenas aritmética de ponteiros, leia esse vetor do teclado e imprima o
dobro de cada valor lido */

int main(int argc, char *argv[]) {

    SetConsoleOutputCP(65001);

    int vet[TAM], i;
    int *p = vet;

    for(i = 0;i < TAM; i++)
    {
        printf("Informe a %dº posição do vetor: ", i+1 );
        scanf("%d", &*(p+i));
    }
    
    printf("\n\n");

    for (i = 0; i < TAM; i++)
    {
        printf("\nO dobro da %dº posição é %d ", i+1, *(p+i)+*(p+i));
    }
    
    return 0;
}