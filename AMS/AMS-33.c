#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("\n *******************************************************************");
	printf("\n * Aluno: ARTHUR MACEDO DA SILVA - RA 0026939                      *");
	printf("\n * Programa AMS-33 -  Múltiplos de 3 entre 1 e 30                  *");
	printf("\n *******************************************************************");
	printf("\n ");
	printf("\nENUNCIADO: Um aplicativo educacional deseja destacar os números múltiplos de 3 para os alunos. O programa deve listar todos os múltiplos de 3 entre 1 e 30. ");
	printf("\n");
	
	int i;
	
	printf("\nOs números multiplos de 3 são:");
	
	for(i=1;i<=30;i++){
		if(i % 3 == 0){
			printf("\n%d",i);
		}		
	}
	
}
