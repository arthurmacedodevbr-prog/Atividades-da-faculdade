// ARTHUR MACEDO DA SILVA - 0026939

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
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
