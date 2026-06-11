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
	printf("\nENUNCIADO: O sistema de catracas de uma empresa precisa saber se um funcionário pode entrar no prédio. No sábado e no domingo a empresa fecha, e a entrada só é permitida de segunda a sexta-feira. O Exercício: Crie um script que receba um número de 1 a 7 (onde 1 é Domingo, 2 é Segunda, e assim por diante). O programa deve agrupar os casos e exibir se é um dia de trabalho ou descanso: 2, 3, 4, 5, 6: Exibir Dia Útil. Acesso liberado para o trabalho. 1, 7: Exibir Fim de Semana. Prédio fechado. Outros números: Número de dia inválido.");
	printf("\n");
		
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
