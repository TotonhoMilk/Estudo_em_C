// Calcula o produto escalar entre dois vetores.
// 26/12/2025

#include <stdio.h>

int add_vectors(int *v1, int *v2, int n) {
  int resultado = 0;
  for (int i = 0; i < n; i++) {
    resultado += v1[i] * v2[i];
  }
  return resultado;
}

int main() {
  int vector1[] = {2, 5, 4};
  int vector2[] = {3, 2, 1};
  int n = sizeof(vector1) / sizeof(vector1[0]);
  int res = add_vectors(vector1, vector2, n);
  printf("Resultado: %d\n", res);
  return 0;
}
