#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("\n ****************************************************************************");
	printf("\n * Aluno: ARTHUR MACEDO DA SILVA - RA 0026939                               *");
	printf("\n * Programa AMS-59 -  O Assistente de Direção (GPS Sem Mapa)                *");
	printf("\n ****************************************************************************");
	printf("\n ");
		
	char direcao;
	
	printf("Qual direção você deseja ir: ");
	scanf(" %c",&direcao);
	
	switch(direcao){
		case 'N':
			printf("Seguir para o Norte");
			break;
			
		case 'S':
			printf("Seguir para o Sul");
			break;
			
		case 'L':
			printf("Seguir para o Leste");
			break;
			
		case 'O':
			printf("Seguir para o Oeste");
			break;
			
		default:
			printf("Comando inválido! Pare o robô.");
			printf("\n");
		}

}
