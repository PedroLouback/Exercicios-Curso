#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>
#define TAM 80

/* Um palíndromo é uma palavra ou frase que tenha a propriedade de ser a mesma palavra ou
frase tanto quando ela é lida da direita para a esquerda quanto quando ela é lida da esquerda
para a direita. Faça um programa que, dada uma string, diga se ela e um palíndromo ou não.
O programa deve imprimir “É Palíndromo” caso a string seja um palíndromo e “Não é
palíndromo”, caso não seja. Lembre de tratar a pontuação e acentuação na resolução do
exercício.
Nos exemplos abaixo, por exemplo, o programa deve retornar que as palavras/frases abaixo
são palíndromos:
a. ovo
b. arara
c. Socorram-me, subi no ônibus em Marrocos.
d. Anotaram a data da maratona.
e. mega bobagem 
 */

char acentos(char x)
{
    x = toupper(x);
    
    if((x == 'Á') || (x == 'Â') || (x == 'Ã') || (x == 'À')){
        
        x = 'A';
    }
    if((x == 'É') || (x == 'Ê')){
        
        x = 'E';
    }
    if((x == 'Í') || (x == 'Î')){
        
        x = 'I';
    }
    if((x == 'Ó') || (x == 'Ô') || (x == 'Õ')){
        
        x = 'O';
    }
    if((x == 'Ú') || (x == 'Û')){
        
        x = 'U';
    }
    if(x == 'Ç'){
        
        x = 'C';
    }
}

int main(int argc, char *argv[]) {

    SetConsoleOutputCP(CP_UTF8);

    char string[TAM], string2[TAM];
    int i,j=0, ret=0;

    fflush(stdin);
    printf("Informe uma palavra para verificar se é palíndromo ou não: ");
    fgets(string, TAM, stdin);
    string[strlen(string)-1] = '\0';

    for(i=0; i < strlen(string); i++){
        if (isalpha(string[i])) {
            string2[j++] = acentos(string[i]);
        }  
    }
    string2[j] = '\0'; 

    for (i = 0; string2[i]; i++){
    string2[i] = tolower(string2[i]);
    }

    strcpy(string, string2);

    strrev(string2);

    ret = strcmp(string2, string);

    if (ret == 0)
    printf("\nÉ palindroma\n");
    else
    printf("\nNão é palindroma\n");


    return 0;
}