#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("\n *******************************************************************");
	printf("\n * Aluno: ARTHUR MACEDO DA SILVA - RA 0026939                      *");
	printf("\n * Programa AMS-46 -  Contar de 1 a 10                             *");
	printf("\n *******************************************************************");
	printf("\n ");
		
	int x=1;
	
	do{
		printf("%d\n", x);
		x++;
	}while(x<=10);
    
}
