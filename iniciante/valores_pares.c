#include <stdio.h>

int main() {
  int num[5] = {0};

  for (int i = 0; i < 5; i++) {
    scanf("%d", &num[i]);
  }
  int pares = 0;
  for (int i = 0; i < 5; i++) {
    if (num[i] % 2 == 0) {
      pares++;
    }
  }

  printf("%d valores pares\n", pares);

  return 0;
}
