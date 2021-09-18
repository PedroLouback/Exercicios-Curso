#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define N 100
        
/* Defina uma Struct que representa um carro. Essa estrutura criada deve permitir
armazenar: modelo do carro, fabricante, ano de fabricação e consumo (em km/l).
Em seguida, crie um menu que permita:
a) Cadastrar carro
b) Remover carro
c) Listar carros de determinado fabricante
d) Listar carro mais econômico
e) listar o carro com o maior consumo
f) listar o carro mais novo
Obs: Considere que o programa irá permitir o cadastro de até 100 carros.
 */
struct veiculo{
        char modelo_carro[50];
        char fabricante[50];
        int ano_fabricacao;
        int consumo;
};
        
int main(int argc, char *argv[]) {
        
    SetConsoleOutputCP(65001);

    struct veiculo v[N];
    int i=0, cont=0, maior=0, maior_ano_fabricacao=0, maior_consumo=0;
    char escolha, carro_removido[50], carro_buscado[50];
    
    while (1){
        menu:
        printf("|------------------------ CADASTRAMENTO DE CARROS ----------------------| ");
        printf("\n\n|--Selecione uma das alternativas abaixos conforme sua descrição!--     |");
        printf("\n\n|a. Cadastrar carro;                                                    |");
        printf("\n\n|b. Remover carro;                                                      |");
        printf("\n\n|c. Lista carros de determinado fabricante;                             |");
        printf("\n\n|d. Listar carros mais econômico;                                       |");
        printf("\n\n|e. listar o carro com o maior consumo;                                           |");
        printf("\n\n|f. Listar o carro mais novo;                                           |");
        printf("\n\n|-----------------------------------------------------------------------|");

        printf("\n\nInforme a opção escolhida: ");
        scanf(" %c", &escolha);
        if (escolha == 'a' || escolha == 'A'){
            while (i < N){
                printf("\n\nInforme o modelo do carro: ");
                fflush(stdin);
                fgets(v[cont].modelo_carro, 50, stdin);
                v[cont].modelo_carro[strlen(v[cont].modelo_carro)-1]='\0';
                printf("\nInforme o fabricante do modelo %s: ", v[cont].modelo_carro);
                fflush(stdin);
                fgets(v[cont].fabricante, 50, stdin);
                v[cont].fabricante[strlen(v[cont].fabricante)-1]='\0';
                printf("\nInforme o ano de fabricação (aaaa) do %s %s: ", v[cont].fabricante, v[cont].modelo_carro);
                scanf("%d", &v[cont].ano_fabricacao);
                printf("\nInforme o consumo (em km/L) do %s %s: ", v[cont].fabricante, v[cont].modelo_carro);
                scanf("%d", &v[cont].consumo);
                printf("\n\n");
                if (v[cont].ano_fabricacao <= 1885){
                    break;
                }
                cont++;
                break;
            }         
        }
        if (escolha == 'b' || escolha == 'B'){
            i=0;
            printf("\nInforme o modelo do carro que deseja remover: ");
            fflush(stdin);
            fgets(carro_removido, 50, stdin);
            carro_removido[strlen(carro_removido)-1]='\0';
            while (i<N){
                if (strcmp(carro_removido, v[i].modelo_carro)==0){
                    v[i].ano_fabricacao = 1583;
                    printf("\nModelo removido com sucesso!");
                    printf("\n\n");
                    break;
                }
                i++;
            } 
        }
        if (escolha == 'c' || escolha == 'C'){
            i=0;
            printf("\nInforme o fabricante que deseja listar: ");
            fflush(stdin);
            fgets(carro_buscado, 50, stdin);
            carro_buscado[strlen(carro_buscado)-1]='\0';
            while(i<cont){
                if (strcmp(carro_buscado, v[i].fabricante)==0 && v[i].ano_fabricacao != 1583){
                    printf("\n       -| INFORMAÇÕES DO FABRICANTE '%s'|-       ", v[i].fabricante);
                    printf("\n\nModelo: %s", v[i].modelo_carro);
                    printf("\nFrabricante: %s", v[i].fabricante);
                    printf("\nAno de fabricação: %d ", v[i].ano_fabricacao);
                    printf("\nConsumo: %d km/L", v[i].consumo);
                    printf("\n\n");
                } 
                i++;  
            }
        }

        if (escolha == 'd' || escolha == 'D'){	
            for (i = 0; i < cont; i++) {
                if ( v[i].consumo > maior && v[i].ano_fabricacao != 1583) {
                maior = v[i].consumo;
                maior_consumo = i;
                }
            }
            printf("\n       -| INFORMAÇÕES DO MAIS ECONÔMICO |-       ");
            printf("\n\nModelo: %s", v[maior_consumo].modelo_carro);
            printf("\nFrabricante: %s", v[maior_consumo].fabricante);
            printf("\nAno de fabricação: %d ", v[maior_consumo].ano_fabricacao);
            printf("\nConsumo: %d km/L", v[maior_consumo].consumo);
            printf("\n\n");	
        }
        if (escolha == 'e' || escolha == 'E'){
            maior=0;
            maior = v[0].consumo;	
            for (i = 0; i < cont; i++) {
                if ( v[i].consumo < maior) {
                maior = v[i].consumo;
                maior_consumo = i;
                }
            }  
            if (v[i].ano_fabricacao != 1583){
                printf("\n       -| INFORMAÇÕES DO MAIOR CONSUMO |-       ");
                printf("\n\nModelo: %s", v[maior_consumo].modelo_carro);
                printf("\nFrabricante: %s", v[maior_consumo].fabricante);
                printf("\nAno de fabricação: %d ", v[maior_consumo].ano_fabricacao);
                printf("\nConsumo: %d km/L", v[maior_consumo].consumo);
                printf("\n\n");
            }
        }
         if (escolha == 'f' || escolha == 'F'){
             maior = v[0].ano_fabricacao;	
            for (i = 0; i < cont; i++) {
                if ( v[i].ano_fabricacao > maior) {
                    maior = v[i].ano_fabricacao;
                    maior_ano_fabricacao = i;		
                }	
            }
            if (v[i].ano_fabricacao != 1583){
                printf("\n       -| INFORMAÇÕES DO CARRO MAIS NOVO |-       ");
                printf("\n\nModelo: %s", v[maior_ano_fabricacao].modelo_carro);
                printf("\nFrabricante: %s", v[maior_ano_fabricacao].fabricante);
                printf("\nAno de fabricação: %d ", v[maior_ano_fabricacao].ano_fabricacao);
                printf("\nConsumo: %d km/L", v[maior_ano_fabricacao].consumo);
                printf("\n\n");
                goto menu;
            }
         }
    }
    
    return 0;
}