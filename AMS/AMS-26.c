#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("\n *******************************************************************");
	printf("\n * Aluno: ARTHUR MACEDO DA SILVA - RA 0026939                      *");
	printf("\n * Programa AMS-26 -  Contar de 1 a 10                             *");
	printf("\n *******************************************************************");
	printf("\n ");
	printf("\nENUNCIADO: Um professor quer que o computador mostre automaticamente os números usados em uma chamada de alunos. O programa deve imprimir os números de 1 até 10 utilizando um laço for.");
	printf("\n");
	
	int i;
	
	for(i=1;i<=10;i++){
		printf("\n%d",i);		
	}
	
}
