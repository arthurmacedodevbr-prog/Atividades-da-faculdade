#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("\n *******************************************************************");
	printf("\n * Aluno: ARTHUR MACEDO DA SILVA - RA 0026939                      *");
	printf("\n * Programa AMS-54 -  Validar número entre 1 e 5                      *");
	printf("\n *******************************************************************");
	printf("\n ");
		
	int nivel;
	
	do{
		printf("Digite um valor: ");
		scanf("%d",&nivel);
		
		if(nivel <= 0 || nivel >= 6){
			printf("Valor ínvalido, digite outro\n ");
		}
		
		
	}while(nivel <=0 || nivel >=6);
	
	printf("A dificuldade do jogo será no nível: %d", nivel);

}
