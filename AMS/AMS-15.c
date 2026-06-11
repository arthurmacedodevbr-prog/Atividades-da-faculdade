// ARTHUR MACEDO DA SILVA - 0026939

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("\n *******************************************************************");
	printf("\n * Aluno: ARTHUR MACEDO DA SILVA - RA 0026939                      *");
	printf("\n * AMS-15: Quantas caixas cabem dentro do caminhão                 *");
	printf("\n *******************************************************************");
	printf("\n ");
	printf("\nENUNCIADO: Uma empresa de logística precisa calcular quantas caixas podem ser transportadas em um caminhão sem ultrapassar o espaço disponível. O sistema deve receber as dimensões do caminhão e das caixas (altura, largura e comprimento) e calcular quantas caixas cabem no interior do veículo. O programa deverá utilizar variáveis para armazenar os valores e, como teste, o aluno deve digitar os valores fornecidos pelo professor para verificar o resultado do cálculo. ");
	printf("\n");
	
	float LC,CC,HC;
	
	printf("DIGITE A LARGURA DO CAMINHÃO : ");
	scanf("%f",&LC);
	printf("DIGITE A COMPRIMENTO DO CAMINHÃO : ");
	scanf("%f",&CC);
	printf("DIGITE A ALTURA DO CAMINHÃO : ");
	scanf("%f",&HC);
	
	float VC = LC*CC*HC;
	
	float LCX,CCX,HCX;
	
	printf("DIGITE A LARGURA DA CAIXA : ");
	scanf("%f",&LCX);
	printf("DIGITE A COMPRIMENTO DA CAIXA : ");
	scanf("%f",&CCX);
	printf("DIGITE A ALTURA DA CAIXA : ");
	scanf("%f",&HCX);
	
	float VCX = LCX*CCX*HCX;
	
	float VT = VC/VCX;
	
	printf("A QUANTIDADE DE CAIXAS QUE CABEM É %.2f", VT);
		
}
