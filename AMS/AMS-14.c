// ARTHUR MACEDO DA SILVA - 0026939

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	int L1,L2,L3;
	
	printf("Digite o valor do lado 1 : ");
	scanf("%d",&L1);
	
	printf("Digite o valor do lado 2 : ");
	scanf("%d",&L2);
	
	printf("Digite o valor do lado 3 : ");
	scanf("%d",&L3);	
	
	if(L1==L2 && L2==L3){
		printf("EQUILATERO");
	}else if(L1==L2 || L2==L3 || L3==L1){
		printf("ISOSCELES");
	}else{
		printf("ESCALENO");
	}	
	
}
