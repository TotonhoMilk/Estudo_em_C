// Gera número aleatório em 0 e 6. Simulador de jogo de dados.
// 25/12/2025

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void dice_row() {
  int num = rand() % 7;
  printf("Dado: %d\n", num);
}

int main() {
  int opcao = 0;
  int jogo = 1;
  srand(time(NULL));
  while (jogo) {
    printf("Deseja rodar o dado?\n1 - Sim | 2 - Não --> ");
    scanf("%d", &opcao);
    switch (opcao) {
    case 1:
      dice_row();
      break;
    case 2:
      jogo = 0;
      break;
    default:
      printf("Opção inválida\n");
      break;
    }
  }
  return 0;
}
