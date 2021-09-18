#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/* Sejam P(x1; y1) e Q(x2; y2) dois pontos quaisquer no plano. A sua dist�ncia � dada por:
Fa�a um algoritmo que leia v�rias linhas com quatro valores correspondentes �s coordenadas
dos pontos P e Q e retorne a dist�ncia destes pares de pontos. A leitura dos dados ser�
interrompida quando as quatro coordenadas forem iguais a zero.*/

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int x1=0, y1=0, x2=0, y2=0;
	float distancia;
	
	do {
		printf ("Informe as coordenadas X do ponto P: ");
		scanf ("%d", &x1);
		printf ("Informe as coordenadas Y do ponto P: ");
		scanf ("%d", &y1);
		printf ("\nInforme as coordenadas X do ponto Q: ");
		scanf ("%d", &x2);
		printf ("Informe as coordenadas Y do ponto Q: ");
		scanf ("%d", &y2);
		
		if (x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0){
			printf ("\nLeitura de coordenadas encerrada!");
			break;
		}
		
		distancia = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
		
		printf ("\nA dist�ncia entre as coordenadas do ponto P e do ponto Q �: %.2f", distancia);
		printf ("\n\n-----------------------//--------------------------");
		printf ("\n\n");
			
	} while (x1 != 0 && y1 != 0 && x2 != 0 && y2 != 0);
	
	return 0;
}
