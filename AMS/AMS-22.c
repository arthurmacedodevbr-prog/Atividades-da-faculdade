#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("\n *******************************************************************");
	printf("\n * Aluno: ARTHUR MACEDO DA SILVA - RA 0026939                      *");
	printf("\n * AMS-22: Par ou ímpar                                            *");
	printf("\n *******************************************************************");
	printf("\n ");
	printf("\nENUNCIADO: Em um jogo educativo, o participante digita um número para descobrir sua classificação. O programa deve verificar se o número informado é par ou ímpar.");
	printf("\n");
	
	int x;
	
	printf("Digite um número: ");
	scanf("%d",&x);
	
	if(x%2 == 0){
		printf("%d é par", x);
	}else{
		printf("%d é ímpar", x);
	}
	
	}
