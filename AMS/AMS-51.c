#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("\n *******************************************************************");
	printf("\n * Aluno: ARTHUR MACEDO DA SILVA - RA 0026939                      *");
	printf("\n * Programa AMS-51 -  Contagem regressiva de 10 até 1              *");
	printf("\n *******************************************************************");
	printf("\n ");
	printf("\nENUNCIADO: Uma corrida escolar utiliza uma contagem regressiva antes da largada. O programa deve mostrar os números de 10 até 1 em ordem decrescente utilizando do...while");
	printf("\n");
		
	int x=10;
	
	
	do{
	printf("%d\n",x);
	x--;
	
	}while(x>=1);

}
