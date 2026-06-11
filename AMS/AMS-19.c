#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("\n *******************************************************************");
	printf("\n * Aluno: ARTHUR MACEDO DA SILVA - RA 0026939                      *");
	printf("\n * Programa AMS-19 - Ordem crescente (três números)                *");
	printf("\n *******************************************************************");
	printf("\n ");
	printf("\nENUNCIADO: Durante uma competição escolar, três alunos obtiveram pontuações diferentes. O sistema precisa organizar os valores do menor para o maior para facilitar a classificação. O programa deve receber três números e exibi-los em ordem crescente.");
	printf("\n ");
	
	float p1, p2, p3;
	
	printf("Digite as pontuações:\n");
	scanf("%f",&p1);
	scanf("%f",&p2);
	scanf("%f",&p3);
	
	if(p1>p2 && p1>p3 && p2>p3){
		printf("Ouro: %.1f, Prata: %.1f, Bronze: %.1f",p1, p2, p3);
	}else if(p1>p2 && p1>p3 && p2<p3){
		printf("Ouro: %.1f, Prata: %.1f, Bronze: %.1f",p1, p3, p2);
	}else if(p2>p1 && p2>p3 && p1>p3){
		printf("Ouro: %.1f, Prata: %.1f, Bronze: %.1f",p2, p1, p3);
	}else if(p2>p1 && p2>p3 && p1<p3){
		printf("Ouro: %.1f, Prata: %.1f, Bronze: %.1f",p2, p3, p1);
	}else if(p3>p1 && p3>p2 && p2<p1){
		printf("Ouro: %.1f, Prata: %.1f, Bronze: %.1f",p3, p1, p2);
	}else if(p3>p1 && p3>p2 && p2>p1){
		printf("Ouro: %.1f, Prata: %.1f, Bronze: %.1f",p3, p2, p1);
	}
	
}
