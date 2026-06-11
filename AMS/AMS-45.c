#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("\n *******************************************************************");
	printf("\n * Aluno: ARTHUR MACEDO DA SILVA - RA 0026939                      *");
	printf("\n * Programa AMS-45 -  Menu até escolher sair                       *");
	printf("\n *******************************************************************");
	printf("\n ");
	printf("\nENUNCIADO: Um caixa eletrônico simples apresenta opções ao usuário. O programa deve exibir um menu repetidamente até que a opção “sair” seja escolhida.");
	printf("\n");
		
	int x;
	
	printf("1 - Sacar\n ");
	printf("2 - Depositar\n ");
	printf("0 - Sair\n ");
	printf("\n ");
	printf("Escolha uma opção: ");
	scanf("%d",&x);
	
	while(x!=0){
		if(x==1){
			printf("Você escolheu a opção sacar");
		}else if(x==2){
			printf("Você escolheu a opção depositar");
		}
		scanf("%d",&x);
	}
	printf("Você escolheu a opção sair");
    
}
