#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("\n ****************************************************************************");
	printf("\n * Aluno: ARTHUR MACEDO DA SILVA - RA 0026939                               *");
	printf("\n * Programa AMS-60 -  O Validador de Dias Úteis                             *");
	printf("\n ****************************************************************************");
	printf("\n ");
		
	int dia;
	
	printf("Digite o número correspondente a semana: ");
	scanf("%d",&dia);
	
	switch(dia){
		case 1:
			printf("Domingo - Fim de Semana. Prédio fechado.");
			break;
			
		case 2:
			printf("Segunda - Dia Útil. Acesso liberado para o trabalho.");
			break;
			
		case 3:
			printf("Terça - Dia Útil. Acesso liberado para o trabalho.");
			break;
			
		case 4:
			printf("Quarta - Dia Útil. Acesso liberado para o trabalho.");
			break;
			
		case 5:
			printf("Quinta - Dia Útil. Acesso liberado para o trabalho.");
			break;
			
		case 6:
			printf("Sexta - Dia Útil. Acesso liberado para o trabalho.");
			break;
			
		case 7:
			printf("Sabado - Fim de Semana. Prédio fechado.");
			break;
			
		default:
			printf("Número de dia inválido.");
			printf("\n");
		}

}
