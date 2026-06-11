#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("\n *******************************************************************");
	printf("\n * Aluno: ARTHUR MACEDO DA SILVA - RA 0026939                      *");
	printf("\n * Programa AMS-36 -  Contar até 10 com while                      *");
	printf("\n *******************************************************************");
	printf("\n ");
	printf("\nENUNCIADO: Uma criança está aprendendo contagem numérica no computador. O programa deve imprimir os números de 1 até 10 usando while.");
	printf("\n");
	
	int n = 1;
	
	while( n <= 10){
		printf("\n%d",n);
		n++;
	}
	
}
