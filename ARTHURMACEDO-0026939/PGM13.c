// ARTHUR MACEDO DA SILVA - 0026939

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int i;
	
	for(i=1;i<=50;i++){
		if(i % 2 == 0){
			printf("%d \n", i);
		}
	}
	
}
