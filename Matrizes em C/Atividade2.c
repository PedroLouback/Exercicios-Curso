#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

/* Dizemos que uma matriz quadrada inteira é um quadrado mágico se a
soma dos elementos de cada linha, a soma dos elementos de cada coluna
e a soma dos elementos das diagonais principal e secundária são todas
iguais.
Por exemplo, a matriz
é um quadrado mágico. Dada uma matriz quadrada A nxn , verificar se A é um
quadrado mágico.

 */

int main(int argc, char const *argv[])
{
    
    SetConsoleOutputCP(CP_UTF8);

    int i, j, COLUNA, soma_linha=0, soma_coluna=0, soma_diagonal=0, tamanho=0, soma_diagonal_inversa=0;
    
    printf("Insira o tamanho da matriz (considere como quadrada): ");
    scanf("%d", &tamanho);

    int matriz[tamanho][tamanho];

    for(i=0; i < tamanho; i++){
        for(j=0; j < tamanho; j++){
        printf("Informe o A[%d][%d]: ", i+1, j+1);
        scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < tamanho; i++)
    {
     soma_linha +=  matriz[0][i];
    }
     for(i = 0; i < tamanho; i++)
    {
     soma_coluna += matriz[i][0];
    }        
    for(i = 0; i < tamanho; i++){
        soma_diagonal_inversa += matriz[2-i][i];
        soma_diagonal += matriz[i][i];
    }
    
    if(soma_linha == soma_coluna && soma_linha == soma_diagonal && soma_diagonal == soma_coluna){
        printf("\n\nA matriz é um quadrado mágico!");
    } else {
        printf("\n\nA matriz não é um quadrado mágico!");
    }

    return 0;
}
