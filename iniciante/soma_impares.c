#include <stdio.h>

int main() {
  int num[2] = {0};
  scanf("%d", &num[0]);
  scanf("%d", &num[1]);
  int menor, maior;
  if (num[0] < num[1]) {
    menor = num[0];
    maior = num[1];
  } else {
    menor = num[1];
    maior = num[0];
  }

  int soma = 0;

  for (int i = menor + 1; i < maior; i++) {
    if (i % 2 != 0) {
      soma += i;
    }
  }

  printf("%d\n", soma);

  return 0;
}
