// Efetua a soma de dois vetores, retornando um vetor soma
// 28/12/2025

#include <stdio.h>

void sum_vector(int *v1, int *v2, int *res, int n) {
  for (int i = 0; i < n; i++) {
    res[i] = v1[i] + v2[i];
  }
}

int main() {
  int vec1[] = {2, 5, 4};
  int vec2[] = {3, 2, 1};
  int res[3];
  int n = sizeof(vec1) / sizeof(vec1[0]);
  sum_vector(vec1, vec2, res, n);
  printf("A soma do vetor (%d, %d, %d) ", vec1[0], vec1[1], vec1[2]);
  printf("com o vetor (%d, %d, %d) é: ", vec2[0], vec2[1], vec2[2]);
  printf("(%d, %d, %d)\n", res[0], res[1], res[2]);
  return 0;
}
