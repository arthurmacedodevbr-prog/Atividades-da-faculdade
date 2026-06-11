#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("\n ****************************************************************************");
	printf("\n * Aluno: ARTHUR MACEDO DA SILVA - RA 0026939                               *");
	printf("\n * Programa AMS-55 -  Ler números e mostrar o maior (até digitar negativo)  *");
	printf("\n ****************************************************************************");
	printf("\n ");
	printf("\nENUNCIADO: Uma pesquisa escolar registra notas positivas dos participantes. O programa deve continuar recebendo números até que um valor negativo seja digitado. Ao final, deve mostrar qual foi o maior número positivo informado.");
	printf("\n");
		
	int x, maior=0;
	
	do{
		printf("Digite um valor: ");
		scanf("%d",&x);
		
		if(x>maior){
			maior = x;
		}
		
		
	}while(x>=0);
	
	printf("O maior número digitado foi: %d", maior);

}
