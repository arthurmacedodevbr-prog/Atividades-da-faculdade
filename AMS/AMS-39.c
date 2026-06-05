#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("\n *******************************************************************");
	printf("\n * Aluno: ARTHUR MACEDO DA SILVA - RA 0026939                      *");
	printf("\n * Programa AMS-39 -  Verificar se um número é positivo            *");
	printf("\n *******************************************************************");
	printf("\n ");
	
	float n;
	
	printf("\nDigite um número:");
	
	while( n >= 0){
		scanf("\n%f",&n);
	}
	
}
