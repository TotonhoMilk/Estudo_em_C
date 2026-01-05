// Verifica se os conjuntos são disjuntos.
// Conjuntos disjuntos apresentam todos os elementos diferentes entre si.
// 5/1/2026

#include <stdbool.h>
#include <stdio.h>

bool is_disjunto(int arr1[], int len1, int arr2[], int len2) {
  for (int i = 0; i < len1; i++)
    for (int j = 0; j < len2; j++) {
      printf("n[%d]=%d == n[%d]=%d\n", i, arr1[i], j, arr2[j]);
      if (arr1[i] == arr2[j])
        return false;
    }
  return true;
}

int main() {
  int a1[] = {1, 3, 5, 7, 9};
  int a2[] = {2, 4, 6, 8, 10};
  int n1 = sizeof(a1) / sizeof(a1[0]);
  int n2 = sizeof(a2) / sizeof(a2[0]);
  if (is_disjunto(a1, n1, a2, n2))
    printf("Os conjuntos são disjuntos!\n");
  else
    printf("Os conjuntos não são disjuntos!\n");
}
