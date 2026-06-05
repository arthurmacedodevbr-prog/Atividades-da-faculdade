#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("\n *******************************************************************");
	printf("\n * Aluno: ARTHUR MACEDO DA SILVA - RA 0026939                      *");
	printf("\n * AMS-24: Pode votar?                                             *");
	printf("\n *******************************************************************");
	printf("\n ");
	
	int idade;
	
	printf("Quantos anos você tem? ");
	scanf("%d",&idade);
	
	if(idade>=16){
		printf("Você tem idade para votar");
	}else{
		printf("Você não pode votar");
	}
	
	}
