#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("\n *******************************************************************");
	printf("\n * Aluno: ARTHUR MACEDO DA SILVA - RA 0026939                      *");
	printf("\n * AMS-23: Maior de dois números                                   *");
	printf("\n *******************************************************************");
	printf("\n ");
	printf("\nENUNCIADO: Dois atletas registraram suas pontuações em uma prova. O sistema precisa identificar qual foi a maior pontuação. O programa deve receber dois números e mostrar qual deles é o maior. ");
	printf("\n");
	
	float a1, a2;
	
	printf("Pontuação do atleta 1: ");
	scanf("%f",&a1);
	
	printf("Pontuação do atleta 2: ");
	scanf("%f",&a2);
	
	if(a1>a2){
		printf("A maior pontuação foi do atleta 1");
	}else if(a1<a2){
		printf("A maior pontuação foi do atleta 2");
	}else{
		printf("Os dois atletas ficaram empatados");
	}
	
	}
