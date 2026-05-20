// ARTHUR MACEDO DA SILVA - 0026939

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int X,Y;
	
	scanf("%d",&X);
	scanf("%d",&Y);
	printf("\n");
	
	if(X > Y){
		printf("%d é o maior", X);
	}
	else if(Y > X){
		printf("%d é o maior", Y);
	}
	else{
		printf("NÚMEROS IGUAIS");
	}
		
}
