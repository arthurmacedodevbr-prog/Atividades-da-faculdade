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
	printf("\nENUNCIADO: Uma escola criou um sistema simples para liberar o acesso ao laboratório de informática. O programa deve solicitar a senha do usuário repetidamente até que ele digite a senha correta (1111). Quando acertar, o sistema deve mostrar a mensagem “Acesso liberado!”.");
	printf("\n");
		
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
	
	
    
