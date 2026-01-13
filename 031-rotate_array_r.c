// Rotação do array para direita.
// O último elemento vira o primeiro
// 13/1/2026

#include <stdio.h>

void rotate_array_right(int array[], int n) {
  int temp = array[n - 1];
  for (int i = n - 1; i >= 0; i--) {
    array[i + 1] = array[i];
  }
  array[0] = temp;
}

void imprime_array(int array[], int n) {
  printf("[");
  for (int i = 0; i < n; i++) {
    printf("%d", array[i]);
    if (i != n - 1)
      printf(", ");
  }
  printf("]\n");
}

int main() {
  int a[] = {3, 9, 8, 1, 7, 6};
  int len = sizeof(a) / sizeof(a[0]);
  imprime_array(a, len);
  printf("-----------------------\n");
  for (int i = 0; i < len; i++) {
    rotate_array_right(a, len);
    imprime_array(a, len);
    printf("-----------------------\n");
  }
  return 0;
}
