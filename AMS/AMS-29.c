#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("\n *******************************************************************");
	printf("\n * Aluno: ARTHUR MACEDO DA SILVA - RA 0026939                      *");
	printf("\n * Programa AMS-29 -  Números pares de 0 a 50                      *");
	printf("\n *******************************************************************");
	printf("\n ");
	
	int i;
	
	for(i=0;i<=50;i++){
		if(i % 2 == 0){
		printf("\n%d",i);	
		} 		
	}
	
}
