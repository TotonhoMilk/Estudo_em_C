// Imprime apenas caracteres nõo repetidos
// 21/1/2026

#include <stdio.h>

void print_unique(int a[], int n) {
  for (int i = 0; i < n; i++) {
    int match_found = 0;
    for (int j = 0; j < n; j++)
      if (a[i] == a[j] && i != j)
        match_found = 1;
    if (!match_found)
      printf("%d ", a[i]);
  }
}

int main() {
  int a[] = {1, 2, 3, 4, 5, 6, 3, 4, 1, 8, 9, 7, 8};
  int n = sizeof(a) / sizeof(a[0]);
  print_unique(a, n);
  return 0;
}
