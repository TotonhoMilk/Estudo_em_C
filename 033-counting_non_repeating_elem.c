// Conta elementos não repetidos de uma lista
// 13/1/2026

#include <stdio.h>

int count_non_reapet_elem(int array[], int n) {
  int count = 0, i = 0, j = 0;
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++)
      if (array[i] == array[j] && i != j)
        break;
    if (j == n)
      count++;
  }
  return count;
}

int main() {
  int a[] = {1, 3, 5, 7, 3, 7, 6, 6, 4, 2, 9};
  int len = sizeof(a) / sizeof(a[0]);
  int res = count_non_reapet_elem(a, len);
  printf("Elementos não repetidos: %d\n", res);
  return 0;
}
