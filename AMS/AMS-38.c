#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"Portuguese");

    printf("\n *******************************************************************");
    printf("\n * Aluno: ARTHUR MACEDO DA SILVA - RA 0026939                      *");
    printf("\n * AMS-38: Senha correta                                           *");
    printf("\n *******************************************************************");
    printf("\n ");
    printf("\nENUNCIADO: Um sistema de acesso precisa garantir que apenas usuários autorizados entrem. O programa deve solicitar a senha repetidamente até que o usuário digite a senha correta.");
	printf("\n");

    int senha;
    
    printf("Digite a senha: ");
    scanf("%d",&senha);
    
    while(senha != 2026){
    	printf("Senha incorreta, tente novamente: ");
    	scanf("%d",&senha);
	}
	printf("Senha correta");

}
