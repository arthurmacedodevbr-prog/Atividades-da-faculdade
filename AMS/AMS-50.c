#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("\n *******************************************************************");
	printf("\n * Aluno: ARTHUR MACEDO DA SILVA - RA 0026939                      *");
	printf("\n * Programa AMS-50 -  Número positivo obrigatório                  *");
	printf("\n *******************************************************************");
	printf("\n ");
	printf("\nENUNCIADO: Um aplicativo bancário aceita apenas valores positivos para depósitos. O programa deve pedir ao usuário um número positivo e continuar solicitando enquanto ele digitar valores menores ou iguais a zero.");
	printf("\n");
		
	int x;
	
	
	do{
	printf("Digite um valor para depositar: ");
	scanf("%d",&x);
	
	if(x<=0){
		printf("Valor invalido, deposite um valor positivo.\n");
	}
	}while(x<=0);
	
	printf("O valor depositado foi: %d reais", x);

}
	
	
    
