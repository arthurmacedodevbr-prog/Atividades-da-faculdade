// ARTHUR MACEDO DA SILVA - 0026939

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	float media,km,consumo;
	
	printf("a distancia percorrida do automovel\n");
	scanf("%f",&km);
	printf("O Total de combustivel gasto\n");
	scanf("%f",&consumo);
	
	media = km/consumo;
	
	printf("Consumo total gasto %.2f", media);
	
}
