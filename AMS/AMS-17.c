#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("\n *******************************************************************");
	printf("\n * Aluno: ARTHUR MACEDO DA SILVA - RA 0026939                      *");
	printf("\n * Programa AMS-17 - O Sensor do Parque Temático                   *");
	printf("\n *******************************************************************");
	printf("\n ");
	
	int altura;
	
	printf("\nDigite sua altura em centímetros: ");
	scanf("%d",&altura);
	
	if(altura>=140){
		printf("VERDE - (LIBERADO)");
	}else{
		printf("VERMELHO - (BARRADO)");
	}
	
}
