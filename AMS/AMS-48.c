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
	printf("\nENUNCIADO: Faça um programa mostrando um menu de opções. Ele fica pedindo para o usuário escolher entre duas opções (digitar 1 para mostrar uma mensagem ou 2 para sair) até que o usuário escolha a opção 2. O fluxo de execução é o seguinte: O programa exibe o menu com as opções: 1 - Mensagem ou 2 - Sair. Se o usuário escolher 1, ele imprime a mensagem Você escolheu a mensagem!. O programa continuará executando o menu até que o usuário escolha 2 para sair.");
	printf("\n");
		
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
