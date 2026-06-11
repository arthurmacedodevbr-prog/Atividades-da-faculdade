#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("\n *******************************************************************");
	printf("\n * Aluno: ARTHUR MACEDO DA SILVA - RA 0026939                      *");
	printf("\n * Programa AMS-16 - Múltiplo de 3 e/ou 5                          *");
	printf("\n *******************************************************************");
	printf("\n ENUNCIADO: Uma lanchonete criou uma promoção especial. Se o número do pedido for múltiplo de 3, o cliente ganha um refrigerante. ");
	printf("Se for múltiplo de 5, ganha uma sobremesa. Se for múltiplo dos dois, ganha os dois brindes. O programa deve verificar o número do pedido e informar qual prêmio o cliente ganhou.");
	printf("\n");
	
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
