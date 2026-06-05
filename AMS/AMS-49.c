#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("\n *******************************************************************");
	printf("\n * Aluno: ARTHUR MACEDO DA SILVA - RA 0026939                      *");
	printf("\n * Programa AMS-49 -  Pedir senha até acertar                      *");
	printf("\n *******************************************************************");
	printf("\n ");
		
	int x, senha=1111;
	
	
	do{
	printf("Digite a senha: ");
	scanf("%d",&x);
	
	if(x != senha){
		printf("Senha incorreta, tente novamente\n ");
	}
	}while(x!=senha);
	
	printf("Senha correta, bem vindo a sala de informatica");

}
	
	
    
