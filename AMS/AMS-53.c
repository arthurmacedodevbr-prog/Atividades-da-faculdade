#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("\n *******************************************************************");
	printf("\n * Aluno: ARTHUR MACEDO DA SILVA - RA 0026939                      *");
	printf("\n * Programa AMS-53 -  Confirmar saída com 's'                      *");
	printf("\n *******************************************************************");
	printf("\n ");
	printf("\nENUNCIADO: Um programa de cadastro possui um menu simples de opções. Após cada operação, o sistema deve perguntar se o usuário deseja sair. O menu continuará aparecendo até que o usuário digite a letra “s”.");
	printf("\n");
		
	char opcao;
	
	do{
		printf("\n=== MENU ===\n");
        printf("1 - Cadastrar\n");
        printf("2 - Consultar\n");
        printf("3 - Excluir\n");

        printf("\nDeseja sair? (s para sair): ");
        scanf(" %c", &opcao);
	}while(opcao!='s');

}
