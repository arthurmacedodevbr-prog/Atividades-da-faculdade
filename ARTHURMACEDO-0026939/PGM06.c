// ARTHUR MACEDO DA SILVA - 0026939

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int TF,TP;
	float PF,PP;
	
	printf("DIGITE O TOTAL DE FALTAS\n");
	scanf("%d",&TF);
	printf("DIGITE O TOTAL DE PRESENÇA\n");
	scanf("%d",&TP);
	
	float TA = (float) TF+TP;
	PF = (float) TF/TA;
	PP = (float) TP/TA;
	
	printf("O PERCENTUAL DE FALTAS FOI DE %.0f\n", PF*100);
	printf("O PERCENTUAL DE PRESENÇA FOI DE %.0f %", PP*100);
	
}
