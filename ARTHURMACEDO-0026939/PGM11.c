// ARTHUR MACEDO DA SILVA - 0026939

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int N,i;
	scanf("%d",&N);
	int cont = 0;
	
	for(i=1;i<=N;i++){
		cont = cont + i;
	}
	printf("A SOMA TOTAL É %d", cont);
	
}
