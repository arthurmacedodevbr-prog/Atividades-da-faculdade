#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("\n *******************************************************************");
	printf("\n * Aluno: ARTHUR MACEDO DA SILVA - RA 0026939                      *");
	printf("\n * Programa AMS-27 -  Tabuada de um número                         *");
	printf("\n *******************************************************************");
	printf("\n ");
	printf("\nENUNCIADO: Um estudante está treinando matemática e deseja visualizar rapidamente a tabuada de um número. O programa deve receber um número digitado pelo usuário e mostrar sua tabuada de 1 a 10 usando for.");
	printf("\n");
	
	int i,n;
	printf("Digite um número: ");
		scanf("%d",&n);
	
	for(i=1;i<=10;i++){
		printf("\n%d X %d = %d",i,n,i*n);		
	}
	
}
