#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>   

/* Faça um programa que receba uma frase e, a cada ocorrência da palavra
TECLADO, inserir o texto OU MOUSE. Exemplo: Frase: PODE-SE UTILIZAR
O TECLADO PARA ENTRADA DE DADOS. Resposta: PODE-SE UTILIZAR
O TECLADO OU MOUSE PARA ENTRADA DE DADOS.

 */

int main()
{ 
    SetConsoleOutputCP(65001);

    char string[80], string2[80];
    int i, count = 0, count2 = 0, N;
    int pos[20];
 
    printf("Informe uma frase: ");
    fgets(string, 80, stdin);
    string[strlen(string)-1]='\0';

    for (i=0; i < strlen(string); i++)
    {
        if (string[i] == 't' && string[i+1] == 'e' && string[i+2] == 'c' && string[i+3] == 'l' && string[i+4] == 'a' && string[i+5] == 'd' && string[i+6] == 'o')
        {
            count++;
            pos[count2] = i + 6;
            count2++;
        }
    }
 
    char string3[80];
    string3[0] = '\0';
    N = count;
    count = 0;

 

    for(i=0; i<N; i++)
    {
        count2 = 0;
        while(1)
        {
            if(count == pos[i]+1) 
            {  
                break;             
            }
            string2[count2] = string[count];   
            count++; 
            count2++;     
        } 
        string2[count2] = '\0';
        strcat(string2, " ou mouse"); 

 

        strcat(string3, string2);
    }

 

    count2 = 0;
    for (i=pos[N-1]+1; i < strlen(string); i++)
    {
        string2[count2] = string[i];
        count2++;
    }
    string2[count2] = '\0';
    strcat(string3, string2);    

 

    printf("%s\n", string3);

 

    return 0;
}