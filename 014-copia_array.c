// Cria uma cópia de um array.
// 25/12/2025

#include <stdio.h>
#include <stdlib.h>

int *copy_array(int *array, int n) {
  int *p = calloc(n, sizeof(int));
  for (int i = 0; i < n; i++) {
    p[i] = array[i];
  }
  return p;
}

void print_array(int *array, int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

int main() {
  int a1[] = {1, 2, 3};
  int a2[] = {1, 2, 3, 4, 5, 6, 7};

  printf("a1:\n");
  print_array(a1, 3);
  int *a1_cp = copy_array(a1, 3);
  printf("Cópia de a1:\n");
  print_array(a1_cp, 3);
  printf("a2:\n");
  print_array(a2, 7);
  int *a2_cp = copy_array(a2, 7);
  printf("Cópia de a2:\n");
  print_array(a2_cp, 7);

  free(a1_cp);
  free(a2_cp);

  return 0;
}
