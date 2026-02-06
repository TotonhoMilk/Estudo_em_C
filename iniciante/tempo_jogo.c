#include <stdio.h>

int main() {
  int inicio, fim;
  scanf("%d %d%*c", &inicio, &fim);

  if (inicio == fim) {
    printf("O JOGO DUROU 24 HORA(S)\n");
    return 0;
  }
  int cont = 0;
  while (inicio != fim) {
    cont++;
    inicio++;
    if (inicio == 24) {
      inicio = 0;
    }
  }
  printf("O JOGO DUROU %d HORA(S)\n", cont);
  return 0;
}
