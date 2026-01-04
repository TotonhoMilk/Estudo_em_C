// Escreve uma pirâmide de estrelas
// 4/1/2026

#include <stdio.h>

int main() {
  int qtd = 0;
  printf("Digite o tamanho da pirâmide --> ");
  scanf("%d", &qtd);
  for (int i = 0; i < qtd; i++) {
    for (int j = 0; j <= i; j++) {
      printf("*");
    }
    printf("\n");
  }
}
