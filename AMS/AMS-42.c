#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("\n *******************************************************************");
	printf("\n * Aluno: ARTHUR MACEDO DA SILVA - RA 0026939                      *");
	printf("\n * Programa AMS-42 -  Quantidade de números ímpares digitados      *");
	printf("\n *******************************************************************");
	printf("\n ");
	printf("\nENUNCIADO: Uma pesquisa escolar precisa analisar números digitados pelos participantes. O programa deve pedir 10 números e informar quantos deles são ímpares.");
	printf("\n");
	
	int n;
	int i = 1;
	int cont = 0;
	
	while( i <= 10){
		scanf("\n%d",&n);
		if(n % 2 !=0){
			cont = cont + 1;
		}
		i++;
	}
	printf("A quantidade de números ímpares é %d",cont);
	
}
