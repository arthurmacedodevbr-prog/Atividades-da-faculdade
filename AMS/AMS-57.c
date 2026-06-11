#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"Portuguese");

    printf("\n *******************************************************************");
    printf("\n * Aluno: ARTHUR MACEDO DA SILVA - RA 0026939                      *");
    printf("\n * Programa AMS-57 - A Central do Brinquedo Eletrônico             *");
    printf("\n *******************************************************************");
    printf("\n ");
    printf("\nENUNCIADO: Um urso de pelúcia eletrônico tem um botão central. Cada vez que a criança aperta o botão, o urso fala uma frase diferente dependendo da cor que acende na sua barriga. O Exercício: Desenvolva a lógica do urso. O algoritmo deve receber uma palavra (texto) com a cor que acendeu e exibir a fala do brinquedo: Verde: O urso diz: Vamos brincar lá fora! Amarelo: O urso diz: Estou ficando com soninho... Vermelho: O urso diz: Estou com fome, hora do lanche! Caso seja outra cor: O urso apenas pisca as luzes (Mensagem: Cor desconhecida).");
	printf("\n");

    char cor;

    printf("Digite a cor (V, A ou R): ");
    scanf(" %c", &cor);

    switch(cor){

        case 'V':
        case 'v':
            printf("\nO urso diz: Vamos brincar la fora!\n");
            break;

        case 'A':
        case 'a':
            printf("\nO urso diz: Estou ficando com soninho...\n");
            break;

        case 'R':
        case 'r':
            printf("\nO urso diz: Estou com fome, hora do lanche!\n");
            break;

        default:
            printf("\nCor desconhecida.\n");
    }

    
}
