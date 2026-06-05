#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("\n *******************************************************************");
	printf("\n * Aluno: ARTHUR MACEDO DA SILVA - RA 0026939                      *");
	printf("\n * Programa AMS-16 - Múltiplo de 3 e/ou 5                          *");
	printf("\n *******************************************************************");
	
	int numero;
	
	printf("\nSelecione um número: ");
	scanf("%d",&numero);
	
	if(numero % 3 ==0 && numero % 5 ==0){
		printf("Você ganhou o refrigerante e a sobremesa");
	}else if(numero % 5 ==0){
		printf("Você ganhou uma sobremesa");
	}else if(numero % 3 ==0){
		printf("você ganhou um refrigerante");
	}else{
		printf("Você não ganhou nada");
	}
	
}
