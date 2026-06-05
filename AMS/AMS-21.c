#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("\n *******************************************************************");
	printf("\n * Aluno: ARTHUR MACEDO DA SILVA - RA 0026939                      *");
	printf("\n * AMS-21: Número positivo ou negativo                             *");
	printf("\n *******************************************************************");
	printf("\n ");
	
	int x;
	
	printf("Digite um número: ");
	scanf("%d",&x);
	
	if(x>0){
		printf("%d é um número positivo", x);
	}else if(x<0){
		printf("%d é um número negativo", x);
	}else{
		printf("Zero");
	}
	
	}
