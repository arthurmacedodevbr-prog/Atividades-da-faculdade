#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("\n *******************************************************************");
	printf("\n * Aluno: ARTHUR MACEDO DA SILVA - RA 0026939                      *");
	printf("\n * Programa AMS-48 -  Menu com opção de sair                       *");
	printf("\n *******************************************************************");
	printf("\n ");
		
	int x;
	
	
	do{
	printf("1 - mensagem\n");
	printf("2 - sair\n");
	printf("\n");
	printf("Escolha uma opção: ");
	scanf("%d",&x);
	
	if(x==1){
		printf("Você escolheu a mensagem!\n");
	}
	}while(x!=2);
	
	printf("Você saiu");
    
}
