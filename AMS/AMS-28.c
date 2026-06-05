#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("\n *******************************************************************");
	printf("\n * Aluno: ARTHUR MACEDO DA SILVA - RA 0026939                      *");
	printf("\n * Programa AMS-28 -  Soma dos 100 primeiros números naturais      *");
	printf("\n *******************************************************************");
	printf("\n ");
	
	int i,cont;
	cont = 0;
	
	for(i=1;i<=100;i++){
		cont =cont + i; 		
	}
	printf("%d", cont);
	
}
