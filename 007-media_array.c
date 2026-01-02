// Calcula a média dos elementos da matriz
// 23/12/2025

#include <stdio.h>

double avarege_array(double array[], int n) {
  double sum = 0;
  for (int i = 0; i < n; i++) {
    printf("Soma = %.2lf + %.2lf\n", sum, array[i]);
    sum += array[i];
  }
  printf("Média = %.2lf / %d\n", sum, n);
  return sum / n;
}

int main() {
  double ar[] = {1, 2, 3, 4, 5, 6, 7, 8};
  int n = sizeof(ar) / sizeof(ar[0]);
  double media = avarege_array(ar, n);
  printf("A média dos valores é: %.2lf\n", media);
  return 0;
}
