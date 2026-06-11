#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("\n ****************************************************************************");
	printf("\n * Aluno: ARTHUR MACEDO DA SILVA - RA 0026939                               *");
	printf("\n * Programa AMS-56 -  O Menu do Fast-Food Digital                           *");
	printf("\n ****************************************************************************");
	printf("\n ");
	printf("\nENUNCIADO: Você está programando o totem de autoatendimento de uma lanchonete. O cliente vê uma tela com as opções de combos e digita o número do seu pedido. O Exercício: Crie um algoritmo que leia um número inteiro de 1 a 4 correspondente ao combo escolhido e mostre o nome do prato e o valor: 1: Combo Hambúrguer + Batata + Refri - R$ 30,00 2: Combo Pizza Brotinho + Refri - R$ 25,00 3: Combo Salada + Suco Natural - R$ 22,00 4: Combo Balde de Frango + Molho - R$ 35,00 Caso digite qualquer outro número (Default): Opção inválida! Escolha de 1 a 4.");
	printf("\n");
		
	int prato;
	
	do{
	
	printf("1: Combo Hambúrguer + Batata + Refri - R$ 30,00\n");
	printf("2: Combo Pizza Brotinho + Refri - R$ 25,00\n");
	printf("3: Combo Salada + Suco Natural - R$ 22,00\n");
	printf("4: Combo Balde de Frango + Molho - R$ 35,00\n");
	printf("Escolha o prato desejado: ");
	scanf("%d",&prato);
	
	switch(prato){
		case 1:
			printf("Você escolheu combo Hambúrguer + Batata + Refri\n");
			printf("O valor será de 30 reais");
			break;
			
		case 2:
			printf("Você escolheu combo Pizza Brotinho + Refri\n");
			printf("O valor será de 25 reais");
			break;
			
		case 3:
			printf("Você escolheu combo Salada + Suco Natural\n");
			printf("O valor será de 22 reais");
			break;
			
		case 4:
			printf("Você escolheu combo Balde de Frango + Molho\n");
			printf("O valor será de 35 reais");
			break;
			
		default:
			printf("Opção invalida! Escolha de 1 a 4\n");
			printf("\n");
		}
	}while(prato <=0 || prato >=5);

}
