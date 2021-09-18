#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#define TM 50
#define TL 4
        
/* Criar um programa para gerenciar um sistema de reservas de mesas em um
restaurante. O restaurante possui 50 mesas. Cada mesa possui 4 lugares. O
programa deve permitir escolher a quantidade de mesas que se deseja
reservar e quais os n�meros das mesas a serem reservadas (os n�meros das
mesas variam de 1 a 50). Todos os lugares s�o demarcados. Com isso, o
programa deve armazenar o nome, telefone e e-mail de todas as pessoas
que ficar�o em cada um dos lugares da mesa. Em uma mesa de 4 lugares, �
poss�vel que no m�ximo 4 pessoas sentem na mesa, mas podem ser menos
de 4 pessoas. Ao abrir o programa o sistema deve carregar, de um arquivo
bin�rio cujo nome ser� fornecido pelo usu�rio, as reservas do restaurante.
Se o arquivo informado n�o existir, ele deve ser criado. Em seguida, deve ser
poss�vel:
a. Realizar reservas
b. Excluir reservas
c. Procurar por uma determinada reserva
d. Visualizar todas as reservas
e. Informar a porcentagem de ocupa��o do restaurante de acordo com
as reservas realizadas. A porcentagem de ocupa��o deve ser
informada em fun��o do n�mero de mesas que j� possuem reservas
e tamb�m em fun��o do n�mero de pessoas com reserva.
Observa��es:
a) algoritmo dever� informar se foi poss�vel realizar a reserva e atualizar a
reserva. Se n�o for poss�vel, o algoritmo dever� emitir uma mensagem de
erro.
b) O algoritmo deve terminar quando o usu�rio digitar o c�digo 0 para uma
das mesas ou quando todas as mesas j� possu�rem reservas.
c) Ao finalizar o programa, todas as reservas devem ser salvas em um
arquivo bin�rio.
 */
        
typedef struct {
        char nome[50];
        char telefone[20];
        char email[50];
}informacoes;

typedef struct {
    informacoes cadeiras[TL];
} reserva;

int main(int argc, char *argv[]) {
    
    SetConsoleOutputCP(65001);

    FILE *arq;
    reserva r[TM];
    char escolha, nome[20];
    int mesas[TM], qnt_cadeira[TL], qtd_mesa=0, cont_mesa=0, i, j, numero_mesa[TM], n=0, cont1=0, cont=0, mesa_removida=0 ;

    // printf("Informe o nome do arquivo: ");
	// fgets(nome,20,stdin);
	// nome[strlen(nome)-1]='\0';
    
    // if (!(arq = fopen(nome,"wb"))){
    //     printf("\n\nErro! Impossivel abrir o arquivo!");
    //     exit(1);
    // }

    for (i=0; i<TM; i++){
        mesas[i]=0;
    }

    do{
        printf("|------------------------ RESERVA DE MESAS DO RESTAURANTE ----------------------|");
        printf("\n\n|     --Selecione uma das alternativas abaixos conforme sua descri��o!--        |");
        printf("\n\n|a. Realizar reservas;                                                          |");
        printf("\n\n|b. Excluir reservas;                                                           |");
        printf("\n\n|c. Procurar por uma determinada reserva;                                       |");
        printf("\n\n|d. Visualizar todas as reservas;                                               |");
        printf("\n\n|e. Informa a porcentagem de ocupa��o do restaurante;                           |");
        printf("\n\n|-------------------------------------------------------------------------------|");

        printf("\n\nInforme a op��o escolhida: ");
        scanf(" %c", &escolha);
        
        if (escolha == 'a' || escolha == 'A'){
            
            printf("\n\nInforme a quantidade de mesas que deseja reservar: ");
            scanf("%d", &qtd_mesa);
            if (qtd_mesa<=50){
                for (i=0;i<qtd_mesa; i++){
                    pergunta:
                    printf("\nInforme o n�mero da %d� mesa ou o algarismo '0' para encerrar o sistema de reserva: ", i+1);
                    scanf("%d", &numero_mesa[cont]);
                    n = numero_mesa[cont] % 100;
                    if (mesas[n] == 51){
                        printf("\n\nEssa mesa j� est� reservada!\n");
                        goto pergunta;
                    }
                    if (numero_mesa[cont] > 0 || numero_mesa[cont] <= TM){
                        printf("\nInforme a quantidade de cadeiras: ");
                        scanf("%d", &qnt_cadeira[cont]);
                        if (qnt_cadeira[cont] > 0 || qnt_cadeira[cont] <=TL ){
                            for(j=0; j<qnt_cadeira[cont]; j++){
                                printf("\n\n-----------------  Cadeira %d  -----------------", j+1);
                                printf("\nInforme o nome da pessoa que ocupar� o %d� assento: ", j+1);
                                fflush(stdin);
                                fgets(r[cont].cadeiras[j].nome, 50, stdin);
                                printf("\nInforme o telefone da pessoa que ocupar� o %d� assento: ", j+1);
                                fflush(stdin);
                                fgets(r[cont].cadeiras[j].telefone, 50, stdin);
                                printf("\nInforme o email da pessoa que ocupar� o %d� assento: ", j+1);
                                fflush(stdin);
                                fgets(r[cont].cadeiras[j].email, 50, stdin);
                            }
                            n = numero_mesa[cont] % 100;
                            if (mesas[n] + qnt_cadeira[cont] <= TL){
                                printf("\n\nReserva feita com sucesso!\n");
                                mesas[n]=51;
                                cont_mesa++;
                            } 
                            else 
                                printf("\n\nEssa mesa j� est� reservada!\n");
                        } 
                        else
                            printf("\n\nMesa n�o possui a quantidade de cadeiras informada!");
                    } 
                    else
                        printf("\n\nN�mero de mesas inv�lido!");
                    if (cont_mesa == 50){
                        break;
                    }
                    cont++;
                } 
             } 
        }
        if (escolha == 'b' || escolha == 'B'){
            printf("Informe o n�mero da mesa que deseja remover: ");
            scanf("%d", &mesa_removida);
            printf("\n\n------------  MESAS RESERVADAS  ------------");
            printf("\n\nMesa n�mero: %d", numero_mesa[mesa_removida]);
            printf("\nCom %d cadeiras reservadas", qnt_cadeira[mesa_removida]);
            for(j=0; j<qnt_cadeira[mesa_removida]; j++){
                printf("\n\n---------  Dados Cadeira %d  ---------", j+1);
                printf("\nNome: %s", r[mesa_removida].cadeiras[j].nome);
                printf("\nTelefone: %s", r[mesa_removida].cadeiras[j].telefone);
                printf("\nEndere�o de email: %s", r[mesa_removida].cadeiras[j].email);
            }
        }
        if (escolha == 'c' || escolha == 'C'){
            
        }
        if (escolha == 'd' || escolha == 'D'){
            printf("\n\n------------  MESAS RESERVADAS  ------------");
             for (i=0; i < cont_mesa; i++){
                printf("\n\nMesa n�mero: %d", numero_mesa[i]);
                printf("\nCom %d cadeiras reservadas", qnt_cadeira[i]);
                    for(j=0; j<qnt_cadeira[i]; j++){
                        printf("\n\n---------  Dados Cadeira %d  ---------", j+1);
                        printf("\nNome: %s", r[i].cadeiras[j].nome);
                        printf("\nTelefone: %s", r[i].cadeiras[j].telefone);
                        printf("\nEndere�o de email: %s", r[i].cadeiras[j].email);
                    }
             }
        }
        if (escolha == 'e' || escolha == 'E'){
            
        }
    } while (numero_mesa!=0);
    fclose(arq);
        
    return 0;
}
