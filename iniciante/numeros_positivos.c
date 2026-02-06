#include <stdio.h>

int main() {
  float num[6];
  int cont = 0;
  for (int i = 0; i < 6; i++) {
    scanf("%f%*c", &num[i]);
  }
  for (int i = 0; i < 6; i++) {
    if (num[i] > 0) {
      cont++;
    }
  }
  printf("%d valores positivos\n", cont);
  return 0;
}
