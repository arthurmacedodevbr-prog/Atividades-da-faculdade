#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("\n *******************************************************************");
	printf("\n * Aluno: ARTHUR MACEDO DA SILVA - RA 0026939                      *");
	printf("\n * Programa AMS-52 -  Soma até o número ser múltiplo de 10         *");
	printf("\n *******************************************************************");
	printf("\n ");
		
	int x, cont=0;
	
	
	do{
	printf("Digite um valor: ");
	scanf("%d",&x);	
	
	cont=cont+x;
	
	}while(x % 10 != 0);
	
	printf("O resultado da soma é %d", cont);

}
