#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("\n *******************************************************************");
	printf("\n * Aluno: ARTHUR MACEDO DA SILVA - RA 0026939                      *");
	printf("\n * Programa AMS-20 - Ano bissexto                                  *");
	printf("\n *******************************************************************");
	printf("\nENUNCIADO: Uma agenda digital precisa descobrir se determinado ano terá 366 dias. O usuário informa um ano, e o programa deve verificar se ele é bissexto ou não.");
	printf("\n ");
	
	int ano;
	
	printf("Digite o ano: ");
	scanf("%d",&ano);
	
	if((ano%400 == 0) || (ano%4 == 0 && ano%100 != 0)){
		printf("%d é ano bissexto", ano);
	}else{
		printf("%d não é ano bissexto", ano);
	}
	
	
	}
