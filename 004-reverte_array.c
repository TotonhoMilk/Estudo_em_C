// Reverte os valores de um array numérico
// 22/12/2025

#include <stdio.h>

void reverse_array(int array[], int n) {
  int temp;
  for (int i = 0; i < n / 2; i++) {
    temp = array[i];
    printf("temp = array[%d] -> %d\n", i, array[i]);
    printf("array[%d] = %d = array[%d - %d - 1] = %d\n", i, array[i], n, i,
           array[n - i - 1]);
    printf("array[%d - %d - 1] = temp = %d\n", n, i, temp);
    array[i] = array[n - i - 1];
    array[n - i - 1] = temp;
  }
}

void print_array(int array[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

int main() {
  int ar[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int n = sizeof(ar) / sizeof(ar[0]);
  print_array(ar, n);
  reverse_array(ar, n);
  print_array(ar, n);
  return 0;
}
