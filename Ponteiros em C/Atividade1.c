#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/* Faça um programa que solicite ao usuário o tamanho de um vetor e utilizando
ponteiros e alocação dinâmica de memória (utilizando malloc), aloque um vetor
com a quantidade de números inteiros informada pelo usuário. Em seguida, o
programa deve solicitar preenchimento do vetor e informar:
a. Os números pares digitados;
b. A soma dos números pares digitados;
c. Os números ímpares digitados;
d. A quantidade de números ímpares digitados.
e. O maior número. */

int main(int argc, char *argv[]) {

    SetConsoleOutputCP(65001);

    int tamanho=0, soma_pares=0, cont=0, maior=0;
    int *vetor;
    int i;
    printf("Entre com o tamanho do vetor: ");
    scanf("%d", &tamanho);

    vetor = (int *)malloc(tamanho * sizeof(int));

    if (vetor == NULL){
            printf("Erro: Sem memória\n");
            exit(1);
    }

    for(i=0;i<tamanho; i++){
        printf("Informe a %dº posição do vetor: ", i+1);
        scanf("%d", &*(vetor+i));
    }

    printf("\na. Os números pares digitado(s) são/é: ");
    for(i=0;i<tamanho; i++){
        if (*(vetor+i) % 2 == 0){
            printf("%d ", *(vetor+i));
        }
    }

    for(i=0;i<tamanho; i++){
        if (*(vetor+i) % 2 == 0){
            soma_pares += *(vetor+i);
        }
    }
    printf("\nb. A soma dos números pares digitado(s) é: %d", soma_pares);

    printf("\nc. Os números ímpares digitado(s) são/é: ");
    for(i=0;i<tamanho; i++){
        if (*(vetor+i) % 2 != 0){
            printf("%d ", *(vetor+i));
            cont++;
        }
    }
    
    printf("\nd. A quantidade de números ímpares digitados é: %d", cont);

    maior = *(vetor);

    for(i=0;i<tamanho; i++){
        if(*(vetor+i) > maior){
            maior = *(vetor+i);
        }
    }

    printf("\nd. O maior número informado é: %d", maior);
    
    return 0;
}