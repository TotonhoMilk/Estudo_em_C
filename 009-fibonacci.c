// Escreve a sequancia de Fibonacci recursivamente
// 23/12/2025

#include <stdio.h>

int fib(int n) {
  if (n == 0) {
    return 1;
  }
  if (n == 1) {
    return 1;
  }
  return fib(n - 1) + fib(n - 2);
}

int main() {
  int n = 0;
  for (int i = 0; i < 30; i++) {
    int res = fib(i);
    printf("%d ", res);
  }
  return 0;
}
