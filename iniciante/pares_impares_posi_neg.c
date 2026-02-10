#include <stdio.h>

int main() {
  int num[5] = {0};
  for (int i = 0; i < 5; i++) {
    scanf("%d", &num[i]);
  }
  int pares = 0;
  int impares = 0;
  int positivo = 0;
  int negativo = 0;
  for (int i = 0; i < 5; i++) {
    if (num[i] % 2 == 0) {
      pares++;
    } else {
      impares++;
    }
    if (num[i] > 0) {
      positivo++;
    } else if (num[i] < 0) {
      negativo++;
    }
  }

  printf("%d valor(es) par(es)\n", pares);
  printf("%d valor(es) impar(es)\n", impares);
  printf("%d valor(es) positivo(s)\n", positivo);
  printf("%d valor(es) negativo(s)\n", negativo);

  return 0;
}
