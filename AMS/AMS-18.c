#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("\n *******************************************************************");
	printf("\n * Aluno: ARTHUR MACEDO DA SILVA - RA 0026939                      *");
	printf("\n * Programa AMS-18 - Login simples                                 *");
	printf("\n *******************************************************************");
	printf("\n ");
	
	char nome[50];
	char senha[50];
	char senhaCorreta[50] = "uni1234";
	
	printf("Nome de usuario:\n");
	scanf("%s",&nome);
	printf("Digite sua senha:\n");
	scanf("%s",&senha);
	
	if(strcmp(nome, "arthur") == 0 && strcmp(senha, "1234") == 0){
	
	        printf("\nAcesso permitido!\n");

    }else{
		 printf("\nAcesso negado!\n");

    }
	
}
