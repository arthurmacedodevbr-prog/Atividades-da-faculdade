#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("\n *******************************************************************");
	printf("\n * Aluno: ARTHUR MACEDO DA SILVA - RA 0026939                      *");
	printf("\n * Programa AMS-30 -  Fatorial de um número                        *");
	printf("\n *******************************************************************");
	printf("\n ");
	printf("\nENUNCIADO: Um aluno de matemática precisa calcular o fatorial de alguns números para resolver exercícios escolares. O programa deve receber um número e calcular seu fatorial utilizando for.");
	printf("\n");
	
	int i,n, fatorial;
	
	printf("Digite um número: ");
	scanf("%d",&n);
	
	for(i=n;i>0;i--){
		fatorial = fatorial * i;		
	}
	
	printf("O fatorial de %d é %d",n,fatorial);
	
}
