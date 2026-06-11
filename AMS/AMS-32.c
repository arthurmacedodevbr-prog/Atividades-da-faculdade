#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("\n *******************************************************************");
	printf("\n * Aluno: ARTHUR MACEDO DA SILVA - RA 0026939                      *");
	printf("\n * Programa AMS-32 -  Quadrado dos números de 1 a 10               *");
	printf("\n *******************************************************************");
	printf("\n ");
	printf("\nENUNCIADO: Um professor quer demonstrar o conceito de potência ao quadrado para a turma. O programa deve mostrar o quadrado de cada número de 1 até 10.");
	printf("\n");
	
	int i;
	
	for(i=1;i<=10;i++){
		printf("\n%d ao quadrado é %d",i, i*i);		
	}
	
}
