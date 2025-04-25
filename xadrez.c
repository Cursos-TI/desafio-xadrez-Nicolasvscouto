#include <stdio.h>


//funcoes recursivas para torre, rainha e bispo

void RecursividadeTorre(int moviTorre){
    if(moviTorre > 0){
      printf("Direita\n");
      RecursividadeTorre(moviTorre - 1);
    }

}

void RecursividadeRainha(int moviRainha){
   if(moviRainha > 0){
    printf("ESQUERDA!\n");
    RecursividadeRainha(moviRainha - 1);
   }

}

void RecursividadeBispo(int moviBispo){
  if(moviBispo > 0){
    printf("CIMA, DIREITA!\n");
    RecursividadeBispo(moviBispo - 1);
  }

}

int main() {
    char Torre[10] = "Torre", Rainha[10] = "Rainha", Bispo[10] = "Bispo";
    int escolhaPeca;
    int j = 0;

    do{
        printf("BEM VINDO AO JOGO DE XADREZ!!!");
        printf("Escolha qual Peca deseja mover: \n");
        printf("1 - Torre\n");
        printf("2 - Rainha\n");
        printf("3 - Bispo\n");
        printf("4 - Cavalo\n");
        printf("5 - Sair do Jogo\n");
        scanf("%d", &escolhaPeca);


       system("cls");
        switch(escolhaPeca){
            case 1:
              printf("Voce escolheu a Torre!\n");
              RecursividadeTorre(5);
              printf("Parabens, voce moveu a torre 5x para direita!\n");
              break;

            case 2:
             printf("Voce escolheu a Rainha!\n");
             RecursividadeRainha(8);
             printf("Parabens, voce moveu a rainha 8x para esquerda!\n");
             break;

            case 3:
             printf("Voce escolheu o bispo!\n");
             //vamos utilizar um loop aninhado no bispo, mas a funcao recursiva tbm funciona
             for(int i = 0; i < 5; i++){
              for(int j = 0; j < i; j++){
                printf("CIMA, DIREITA\n");
              }
             }
             printf("Parabens, voce moveu o bispo na diagonal!\n");
             break;
            
        //aqui foi utilizado um loop aninhado paraa que, quando o usuario digite quantas vezes ele quer mover o cavalo, a quantidaade desejada seja o numero de vezes que o cavalo move
            case 4:
            printf("Voce Escolheu mover o cavalo!\n");
            int numeroMovi;
            printf("Quantas vezes voce desejar mover o cavalo? (Pode mexer 1 vez para direita e 2 para cima)");
            scanf("%d", &numeroMovi);
             if(numeroMovi > 3){
               printf("Voce nao pode mover o cavalo tanto assim!");
             }else{
              for(int lance = 0; lance < numeroMovi; lance++){
                for(int i = 0; i < 2; i++){
                 printf("Cima!");
                }
                for(int j = 0; j < 1; j++){
                 printf("Direita!");
                }
              }
             }
             printf("Parabens, voce moveu o cavalo duas vezes paraa cima e uma vez para a direita");
             break;

            case 5:
             printf("Saindo...");
             break;
        }
    }while(escolhaPeca != 5);

    return 0;
}
