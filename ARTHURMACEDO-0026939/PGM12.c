// ARTHUR MACEDO DA SILVA - 0026939

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int N,i;
	scanf("%d",&N);
	
	for(i=1;i<=10;i++){
		printf("%d X %d = %d \n",i,N,N*i);
	}
	
}
