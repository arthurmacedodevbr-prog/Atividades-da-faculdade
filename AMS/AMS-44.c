#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("\n *******************************************************************");
	printf("\n * Aluno: ARTHUR MACEDO DA SILVA - RA 0026939                      *");
	printf("\n * Programa AMS-44 -  Contar dígitos de um número                  *");
	printf("\n *******************************************************************");
	printf("\n ");
		
	int x, cont = 0;

    printf("Digite um numero positivo: ");
    scanf("%d",&x);

    while(x > 0) {
        cont++;
        x = x / 10;
    }

    printf("Quantidade de digitos: %d", cont);
    
}
