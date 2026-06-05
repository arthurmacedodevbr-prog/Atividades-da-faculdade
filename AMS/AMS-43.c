#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("\n *******************************************************************");
	printf("\n * Aluno: ARTHUR MACEDO DA SILVA - RA 0026939                      *");
	printf("\n * Programa AMS-43 -  Soma dos pares entre 1 e 100                 *");
	printf("\n *******************************************************************");
	printf("\n ");
		
	int i = 1;
	int cont = 0;
	
	while( i <= 100){
		if(i % 2 == 0){
			cont = cont + i;
		}
		i++;
	}
	printf("A soma dos números pares de 1 a 100 é %d",cont);
	
}
