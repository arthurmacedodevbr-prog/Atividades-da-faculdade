// ARTHUR MACEDO DA SILVA - 0026939

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("\n *******************************************************************************************************************");
	printf("\n * Aluno: ARTHUR MACEDO DA SILVA - RA 0026939                                                                      *");
	printf("\n * Programa AMS-14 - Tipo de Triângulo Tipo de Triângulo                                                           *");
	printf("\n * Uma fábrica de estruturas metálicas produz suportes em formato de triângulo para eventos e construções.         *");
	printf("\n * Antes da fabricação, o sistema precisa verificar o tipo do triângulo com base nas medidas  informadas operador  *");
	printf("\n *******************************************************************************************************************");
	
	
	int L1,L2,L3;
	
	printf("Digite o valor do lado 1 : ");
	scanf("%d",&L1);
	
	printf("Digite o valor do lado 2 : ");
	scanf("%d",&L2);
	
	printf("Digite o valor do lado 3 : ");
	scanf("%d",&L3);	
	
	if(L1==L2 && L2==L3){
		printf("EQUILATERO");
	}else if(L1==L2 || L2==L3 || L3==L1){
		printf("ISOSCELES");
	}else{
		printf("ESCALENO");
	}	
	
}
