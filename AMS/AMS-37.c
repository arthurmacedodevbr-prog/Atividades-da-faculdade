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
	
	int n;
	int cont = 0;
	
	while( n != 0){
		scanf("\n%d",&n);
		cont = cont + n;
	}
	printf("A soma dos números é: %d",cont);
	
}
