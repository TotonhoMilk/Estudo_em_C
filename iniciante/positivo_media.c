#include <stdio.h>

int main() {
  float num[6] = {0};
  for (int i = 0; i < 6; i++) {
    scanf("%f", &num[i]);
  }
  float media = 0;
  int num_pos = 0;
  for (int i = 0; i < 6; i++) {
    if (num[i] > 0) {
      num_pos++;
      media += num[i];
    }
  }
  media = media / num_pos;
  printf("%d valores positivos\n", num_pos);
  printf("%.1f\n", media);
  return 0;
}
