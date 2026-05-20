// ARTHUR MACEDO DA SILVA - 0026939

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	float area,raio;
	
	printf("PROGRAMA QUE CALCULA A ÁREA DO CÍRCULO \n");
	printf("INFORME O RAIO DO CÍRCULO \n");
	scanf("%f",&raio);
	
	area = 3.14 * (raio * raio);
	
	printf("A ÁREA DO CÍRCULO É: %.2f", area);
	
}
