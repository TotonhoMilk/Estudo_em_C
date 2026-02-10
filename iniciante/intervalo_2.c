#include <stdio.h>

int main() {
  int qtd = 0;
  scanf("%d", &qtd);
  int X[qtd];
  for (int i = 0; i < qtd; i++) {
    scanf("%d", &X[i]);
  }
  int in = 0;
  int out = 0;
  for (int i = 0; i < qtd; i++) {
    if (X[i] >= 10 && X[i] <= 20) {
      in++;
    } else {
      out++;
    }
  }

  printf("%d in\n%d out\n", in, out);

  return 0;
}
