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
	printf("\nENUNCIADO: Um sistema financeiro só aceita valores positivos para cadastro. O programa deve continuar pedindo números até que o usuário digite um número positivo.");
	printf("\n");
	
	float n;
	
	printf("\nDigite um número:");
	
	while( n >= 0){
		scanf("\n%f",&n);
	}
	
}
