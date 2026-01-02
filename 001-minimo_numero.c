// Acha o menor número em um array
// 22/12/2025

#include <stdio.h>

int find_min(int array[], int n) {
  int min = array[0];
  for (int i = 1; i < n; i++) {
    printf("min = %d > array[%d] = %d\n", min, i, array[i]);
    if (min > array[i]) {
      min = array[i];
      printf("Verdadeiro!\n\tNovo valor de min = %d\n", min);
    }
  }
  return min;
}

int main() {
  int ar[] = {2, 6, 4, 3, 4, 8, 1, 4, 3, 7};
  int n = sizeof(ar) / sizeof(ar[0]);
  int minimum = find_min(ar, n);
  printf("Menor número = %d\n", minimum);
  return 0;
}
