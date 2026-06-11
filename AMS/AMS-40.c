#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("\n *******************************************************************");
	printf("\n * Aluno: ARTHUR MACEDO DA SILVA - RA 0026939                      *");
	printf("\n * Programa AMS-40 -  Tabuada com while                            *");
	printf("\n *******************************************************************");
	printf("\n ");
	printf("\nENUNCIADO: Um aluno deseja praticar multiplicação usando repetição. O programa deve receber um número e mostrar sua tabuada de 1 a 10 utilizando while.");
	printf("\n");
	
	int n;
	int i = 1;
	
	printf("\nDigite um número: ");
	scanf("%d",&n);
	
	while( i <= 10){
		printf("\n%d X %d = %d",i,n,i*n);
		i++;
	}
	
}
