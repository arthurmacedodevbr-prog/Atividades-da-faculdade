// ARTHUR MACEDO DA SILVA - 0026939

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	float TA,TE,VP;
	
	printf("TA, INSIRA O VALOR DA TAXA TA ");
	scanf("%f",&TA);
	
	TE = 0.8*TA;
	VP = TA+TE;
	
	printf("O VALOR A SER PAGO É %.2f", VP);
	
}
