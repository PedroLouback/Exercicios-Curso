#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

/* Faça um programa que leia uma String S1 e que contenha um menu com as
seguintes opções:
a. Imprimir o tamanho da string S1. Em seguida, copie a String S1 para uma
outra String e concatene a palavra “concatenada” ao fim da String
copiada.
b. Comparar a string S1 com uma nova string S2 fornecida pelo usuário e
imprimir o resultado da comparação. Em seguida, deve-se exibir na tela
o resultado da concatenação das 2 Strings;
c. Contar quantas vezes um dado caractere C1 aparece na string S1. Em
seguida, deve-se substituir a primeira ocorrência do caracter C1, pelo
caracter C2. Os caracteres C1 e C2 serão lidos pelo usuário;
d. Verificar se uma string S2 é substring de S1. A string S2 também deve ser
informada pelo usuário;
 */

int main(int argc, char *argv[]) {

    SetConsoleOutputCP(65001);

    char string1[80], copia_string[80], string2[80], string3[80];
    char escolha, c1, c2;
    int i, j,tamanho, comp, cont_c1=0, verificacao;
    

    printf("Insira uma palavra, frase ou texto: ");
    fgets(string1, 80, stdin);
    string1[strlen(string1)-1]='\0';
    
    menu:
    printf("\n\n");
    printf("|---------------------------- MENU DE INFORMAÇÕES DA STRING -----------------------------------| ");
    printf("\n\n|            --Selecione uma das alternativas abaixos conforme sua descrição!--                |");
    printf("\n\n|a. Mostrar tamanho, copia-lá e concatenar a palavra 'concatenada' na mesma;                   |");
    printf("\n\n|b. Compara a primeira string mencionada com outra nova, sendo exibido a concatenação das duas;|");
    printf("\n\n|c. Conta quantas vezes um caractere inserido existe na primeira string;                       |");
    printf("\n\n|d. Verifica se a string mencionada é substring de outra.                                      |");
    printf("\n\n|----------------------------------------------------------------------------------------------|");
    
    printf("\n\nInforme a opção escolhida: ");
    scanf(" %c", &escolha);
    
    switch (escolha) { 
        case 'a':
            tamanho = strlen(string1)-1;

            for(i = 0; i < strlen(string1); i++){
                if(string1[i] == ' '){
                    tamanho--;
                }
            } 
            printf("\nO tamanho da frase '%s' é de %d letras.", string1, tamanho);
            strcpy(copia_string, string1);
            strcat(copia_string, " concatenada");
            printf("\nConcatenação da string copiada é: %s ", copia_string);
            break;

        case 'b':
            fflush(stdin);
            printf("\n\nInforme uma nova string: ");
            fgets( string2, 80, stdin);
            
            comp = strcmp(string1, string2);

            if (comp==0){
                printf("\n\nAs duas palavras são iguais");
            }   if (comp!=0) {
                    printf("\nAs frases são diferentes");
                }
            strcat(string1, " "); 
            strcat(string1, string2);
            printf("\n\nA concatenação das duas frases é: %s", string1 );
            break;

        case 'c':
            printf("\n\nInforme o caractere 1: ");
            scanf(" %c", &c1);
            printf("\nInforme o caractere 2: ");
            scanf(" %c", &c2);

            for(i=0; i<strlen(string1); i++){
                if (string1[i]==c1){
                    cont_c1++;
                if (cont_c1==1){
                    string1[i]=c2;
                }
                }
            }    
            printf("\n\nA letra '%c' foi contada %d vezes", c1, cont_c1);
            printf("\n\nA palavra com o caracter '%c' substituido pelo '%c' é: %s", c1, c2, string1);
            break;

        case 'd':
            fflush(stdin);
            printf("\n\nInforme uma nova string: ");
            fgets(string3, 80, stdin);
            string3[strlen(string3)-1]='\0';
    
            verificacao = strstr(string1, string3);
        
            if (verificacao != 0)
                printf("Encontrado uma substring nas duas string.\n");
            else
                printf("Nenhum substring encontrada.\n");
            break;

        default : 
            printf("\n\nOpção escolhida inválida!");
            printf("\nInforme novamente uma opção válida mencionada no menu.");
            goto menu;    
    }

    return 0;
}