#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("\n *******************************************************************");
	printf("\n * Aluno: ARTHUR MACEDO DA SILVA - RA 0026939                      *");
	printf("\n * Programa AMS-41 -  Número primo com while                       *");
	printf("\n *******************************************************************");
	printf("\n ");
		
	int x, i=1, div=0;

    printf("Digite um número: ");
    scanf("%d", &x);

    while(i<=x) {
        if(x % i == 0) {
            div++;
        }
        i++;
    }

    if(div == 2) {
        printf("%d é primo", x);
    } else {
        printf("%d não é primo", x);
    }
}
