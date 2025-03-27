#include <stdio.h>

int main() {
    char Torre[10] = "Torre", Rainha[10] = "Rainha", Bispo[10] = "Bispo";
    int escolhaPeca;

    do{
        printf("BEM VINDO AO JOGO DE XADREZ!!!");
        printf("Escolha qual Peca deseja mover: \n");
        printf("1 - Torre\n");
        printf("2 - Rainha\n");
        printf("3 - Bispo\n");
        printf("4 - Sair do Jogo\n");
        scanf("%d", &escolhaPeca);


        system("cls");
        switch(escolhaPeca){
            case 1:
              printf("Voce escolheu a Torre!\n");
              for(int i = 1; i<= 5; i++){
                printf("DIREITA!\n");
              }
              printf("Parabens, voce moveu a torre 5x para direita!\n");
              break;

            case 2:
             printf("Voce escolheu a Rainha!\n");
             int rainhaMovimentacao = 1;
             while(rainhaMovimentacao <= 8){
                printf("ESQUERDA!\n");
                rainhaMovimentacao++;
             }
             printf("Parabens, voce moveu a rainha 8x para esquerda! \n");
             break;

            case 3:
             printf("Voce escolheu o bispo!\n");
             int bispoMovimentacao = 1;
             do{
                printf("CIMA, DIREITA!\n");
                bispoMovimentacao++;
             }while(bispoMovimentacao <= 5);
             printf("Parabens, voce moveu o bispo 5x para diagonal! \n");
             break;

            case 4:
              printf("Saindo...");
              break;
        }

    }while(escolhaPeca != 4);

    return 0;
}
