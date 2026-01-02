// Conta quantas ocorrências de um nũmero em um array
// 22/12/2025

#include <stdio.h>

int count_occurencies(int array[], int n, int oc) {
  int count = 0;
  for (int i = 0; i < n; i++) {
    printf("array[%d] = %d == oc = %d\n", i, array[i], oc);
    if (array[i] == oc) {
      count++;
      printf("Verdadeiro!\n\tNovo valor de count = %d\n", count);
    }
  }
  return count;
}

int main() {
  int ar[] = {1, 3, 4, 5, 6, 1, 3, 7, 1, 9, 1};
  int n = sizeof(ar) / sizeof(ar[0]);
  int num = 3;
  int occurencies = count_occurencies(ar, n, num);
  printf("\nO número %d apareceu %d vezes.\n", num, occurencies);
  return 0;
}
