#include <stdio.h>

void insertation_sort(int s[], int n) {
  for (int i = 1; i < n; i++) {
    int key = s[i];
    int j = i - 1;
    printf("\nkey: %d | j: %d | s[%d]: %d\n", key, j, j, s[j]);
    while (j >= 0 && s[j] > key) {
      printf("s[%d]: %d > %d\n", j, s[j], key);
      s[j + 1] = s[j];
      j = j - 1;
    }
    s[j + 1] = key;
  }
}

void imprime_array(int s[], int n) {
  printf("[");
  for (int i = 0; i < n; i++) {
    printf("%d", s[i]);
    if (i != n - 1) {
      printf(", ");
    }
  }
  printf("]\n");
}

int main() {
  int s[] = {8, 4, 9, 5, 7, 6, 3, 2};
  int n = sizeof(s) / sizeof(s[0]);
  imprime_array(s, n);
  insertation_sort(s, n);
  imprime_array(s, n);
  return 0;
}
