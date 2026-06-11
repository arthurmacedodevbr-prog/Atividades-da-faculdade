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
	printf("ENUNCIADO: Você foi contratado para programar o sistema de segurança de uma nova montanha-russa em um parque de diversões. Por motivos de segurança, existe uma altura mínima de 140 centímetros (1,40m) para poder entrar no brinquedo. Na entrada, há um sensor digital que mede a altura da criança em centímetros. O seu trabalho é criar o algoritmo que lê essa altura e decide se o painel vai acender a luz verde (liberado) ou a luz vermelha (barrado).");
	printf("\n");
	
	int altura;
	
	printf("\nDigite sua altura em centímetros: ");
	scanf("%d",&altura);
	
	if(altura>=140){
		printf("VERDE - (LIBERADO)");
	}else{
		printf("VERMELHO - (BARRADO)");
	}
	
}
