#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("\n *******************************************************************");
	printf("\n * Aluno: ARTHUR MACEDO DA SILVA - RA 0026939                      *");
	printf("\n * AMS-25:  Notas e aprovação                                      *");
	printf("\n *******************************************************************");
	printf("\n ");
	
	float mediaFinal;
	
	printf("Média final do aluno: ");
	scanf("%f",&mediaFinal);
	
	if(mediaFinal>=6){
		printf("Aluno aprovado");
	}else if(mediaFinal>=5){
		printf("Aluno em recuperação");
	}else{
		printf("Aluno reprovado");
	}
	
	}
