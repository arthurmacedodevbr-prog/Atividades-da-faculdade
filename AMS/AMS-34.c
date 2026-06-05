#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"Portuguese");

    printf("\n *******************************************************************");
    printf("\n * Aluno: ARTHUR MACEDO DA SILVA - RA 0026939                      *");
    printf("\n * AMS-34: Verificar se um numero e primo                          *");
    printf("\n *******************************************************************");
    printf("\n ");

    int x, i;

    printf("Digite um número: ");
    scanf("%d", &x);

    if(x <= 1){
        printf("%d não é primo", x);
    }else{
        for(i = 2; i < x; i++){
            if(x % i == 0){
                printf("%d não é primo", x);
                return 0;
            }
        }

        printf("%d é primo", x);
    }

}
