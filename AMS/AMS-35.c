#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"Portuguese");

    printf("\n *******************************************************************");
    printf("\n * Aluno: ARTHUR MACEDO DA SILVA - RA 0026939                      *");
    printf("\n * AMS-35: Números de Fibonacci (n termos)                         *");
    printf("\n *******************************************************************");
    printf("\n ");

    int n, i;
    int a = 0, b = 1, c;

    printf("Quantos termos deseja mostrar? ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("%d ", a);

        c = a + b;
        a = b;
        b = c;
    }

}
