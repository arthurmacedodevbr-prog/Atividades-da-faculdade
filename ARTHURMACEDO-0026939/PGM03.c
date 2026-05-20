// ARTHUR MACEDO DA SILVA - 0026939

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int idade;
	printf("Programa que calcula idade em dias \n");
	printf("Qual sua idade \n");
	scanf("%d",&idade);
	
	idade = idade * 365.25;
	
	printf("Sua idade em dias é: %d", idade);
	
}
