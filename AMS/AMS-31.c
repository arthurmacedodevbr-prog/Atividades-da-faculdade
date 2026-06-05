#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("\n *******************************************************************");
	printf("\n * Aluno: ARTHUR MACEDO DA SILVA - RA 0026939                      *");
	printf("\n * Programa AMS-31 -  Contagem regressiva                          *");
	printf("\n *******************************************************************");
	printf("\n ");
	
	int i;
	
	
	for(i=10;i>=1;i--){
		printf("\n%d",i);		
	}
	
}
