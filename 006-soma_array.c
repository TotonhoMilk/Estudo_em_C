// Soma os elementos de um array
// 23/12/2025

#include <stdio.h>

int sum_array_values(int array[], int n) {
  int sum = 0;
  for (int i = 0; i < n; i++) {
    printf("soma = %2d + %2d\n", sum, array[i]);
    sum += array[i];
  }
  return sum;
}

int main() {
  int ar[] = {1, 2, 3, 4, 5, 6};
  int n = sizeof(ar) / sizeof(ar[0]);
  int soma = sum_array_values(ar, n);
  printf("A soma dos elementos da matriz é: %d\n", soma);
  return 0;
}
