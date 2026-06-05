#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("\n ****************************************************************************");
	printf("\n * Aluno: ARTHUR MACEDO DA SILVA - RA 0026939                               *");
	printf("\n * Programa AMS-58 -  A Calculadora de Bolso de 4 Operações                 *");
	printf("\n ****************************************************************************");
	printf("\n ");
		
	int x,y;
	char escolha;
	
	printf("Digite o valor 1: ");
	scanf("%d",&x);
	printf("Digite o valor 2: ");
	scanf("%d",&y);
	
	printf("Qual operação você deseja realizar? ");
	scanf(" %c",&escolha);
	
	switch(escolha){
		case '+':
			printf("%d + %d = %d",x,y,x+y);
			break;
			
		case '-':
			printf("%d - %d = %d",x,y,x-y);
			break;
			
		case '*':
			printf("%d X %d = %d",x,y,x*y);
			break;
			
		case '/':
			printf("%d \ %d = %d",x,y,x/y);
			break;
			
		default:
			printf("Operação matemática não reconhecida");
			printf("\n");
		}

}
