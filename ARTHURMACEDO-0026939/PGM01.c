// ARTHUR MACEDO DA SILVA - 0026939

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	int DIN;
	printf("QUANTO DE DINHEIRO VOCÊ TEM?\n");
	scanf("%d",&DIN);
	
	if(DIN > 50){
		printf("Amigão vá ao cinema, você está RICO");
	}
	else{
		printf("Amigão fique em casa assistindo FAUSTÃO");
	}
	
}
