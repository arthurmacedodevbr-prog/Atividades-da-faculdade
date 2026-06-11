#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("\n *******************************************************************");
	printf("\n * Aluno: ARTHUR MACEDO DA SILVA - RA 0026939                      *");
	printf("\n * Programa AMS-52 -  Soma até o número ser múltiplo de 10         *");
	printf("\n *******************************************************************");
	printf("\n ");
	printf("\nENUNCIADO: Um sistema de pontuação recebe vários valores digitados pelo usuário. Os números devem ser somados continuamente até que seja digitado um número múltiplo de 10. Ao final, o programa deve mostrar a soma total dos valores informados.");
	printf("\n");
		
	int x, cont=0;
	
	
	do{
	printf("Digite um valor: ");
	scanf("%d",&x);	
	
	cont=cont+x;
	
	}while(x % 10 != 0);
	
	printf("O resultado da soma é %d", cont);

}
