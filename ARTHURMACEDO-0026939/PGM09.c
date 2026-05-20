// ARTHUR MACEDO DA SILVA - 0026939

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int X;
	scanf("%d",&X);
	printf("\n");
	
	if(X % 2 == 0){
		printf("%d é par", X);
	}
	else{
		printf("%d é ímpar", X);
	}
		
}
