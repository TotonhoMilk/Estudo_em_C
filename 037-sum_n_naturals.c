// Soma N números naturais recursivamente
// 16/1/2026

#include <stdio.h>

int sum(int n) {
  if (n <= 1)
    return 1;
  return n + sum(n - 1);
}

int main() {
  int n = 20;
  int r = sum(n);
  printf("A soma dos %d números é %d\n", n, r);
  return 0;
}
