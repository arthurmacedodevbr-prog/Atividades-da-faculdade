// ARTHUR MACEDO DA SILVA - 0026939

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int N;
	
	scanf("%d",&N);
	if(N > 0){
		printf("Positivo");
	}
	else if(N < 0){
		printf("Negativo");
	}
	else{
		printf("Zero");
	}
	
}
