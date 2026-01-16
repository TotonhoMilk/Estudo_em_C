// Bubble-sort
// 16/1/2026

#include <stdio.h>

void sorting(int array[], int n) {
  int temp = 0;
  int sort = 1;
  while (sort == 1) {
    for (int i = 0; i < n - 1; i++) {
      printf("%d < %d \n", array[i + 1], array[i]);
      if (array[i + 1] < array[i]) {
        temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
        printf("True! Swap --> %d <-> %d \n\n", array[i], array[i + 1]);
      }
    }
    sort = 0;
  }
}

void imprime_array(int array[], int n) {
  printf("[");
  for (int i = 0; i < n; i++) {
    printf("%d", array[i]);
    if (i != n - 1) {
      printf(", ");
    }
  }
  printf("]\n");
}

int main() {
  int a[] = {5, 1, 4, 2, 8};
  int n = sizeof(a) / sizeof(a[0]);
  imprime_array(a, n);
  sorting(a, n);
  imprime_array(a, n);
  return 0;
}
