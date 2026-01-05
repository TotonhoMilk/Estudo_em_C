// Mescla dois arrays elemento por elemento.
// 5/1/2026

#include <stdio.h>
#include <stdlib.h>

int *merge_arrays(int a1[], int len1, int a2[], int len2) {
  int size = len1 + len2;
  int *res = malloc(sizeof(int) * size);
  int cont = 0;
  for (int i = 0; i < size; i += 2) {
    res[i] = a1[cont];
    res[i + 1] = a2[cont];
    cont++;
  }
  return res;
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
  int a1[] = {1, 3, 5, 7, 9};
  int a2[] = {2, 4, 5, 6, 8};
  int n1 = sizeof(a1) / sizeof(a1[0]);
  int n2 = sizeof(a2) / sizeof(a2[0]);
  int *r = merge_arrays(a1, n1, a2, n2);
  imprime_array(r, (n1 + n2));
  free(r);
}
