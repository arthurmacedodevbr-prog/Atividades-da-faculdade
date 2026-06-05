#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("\n *******************************************************************");
	printf("\n * Aluno: ARTHUR MACEDO DA SILVA - RA 0026939                      *");
	printf("\n * Programa AMS-47 -  Contar de 1 a 10                             *");
	printf("\n *******************************************************************");
	printf("\n ");
		
	int i=1,x;
	printf("Digite um número: ");
	scanf("%d",&x);
	
	do{
		printf("%d X %d = %d\n", x,i,x*i);
		i++;
	}while(i<=10);
    
}
