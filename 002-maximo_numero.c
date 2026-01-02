// Acha o maior número em um array
// 22/12/2025

#include <stdio.h>

int find_max(int array[], int n) {
  int max = array[0];
  for (int i = 1; i < n; i++) {
    printf("max = %d < array[%d] = %d\n", max, i, array[i]);
    if (max < array[i]) {
      max = array[i];
      printf("Verdadeiro!\n\tNovo valor de max = %d\n", max);
    }
  }
  return max;
}

int main() {
  int ar[] = {2, 6, 4, 3, 4, 8, 1, 4, 3, 7};
  int n = sizeof(ar) / sizeof(ar[0]);
  int maximum = find_max(ar, n);
  printf("Maior número = %d\n", maximum);
  return 0;
}
