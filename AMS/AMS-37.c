#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("\n *******************************************************************");
	printf("\n * Aluno: ARTHUR MACEDO DA SILVA - RA 0026939                      *");
	printf("\n * Programa AMS-37 -  Soma de números até digitar zero             *");
	printf("\n *******************************************************************");
	printf("\n ");
	printf("\nENUNCIADO: Um caixa simples de mercado precisa somar valores digitados pelo operador. O programa deve continuar recebendo números até que o usuário digite 0 e, ao final, mostrar a soma total.");
	printf("\n");
	
	int n;
	int cont = 0;
	
	while( n != 0){
		scanf("\n%d",&n);
		cont = cont + n;
	}
	printf("A soma dos números é: %d",cont);
	
}
