// Converte número binário em decimal.
// 29/12/2025

#include <stdio.h>
#include <string.h>

int pow_two(int n) {
  int resultado = 1;
  if (n == 0) {
    return 1;
  }
  for (int i = 1; i <= n; i++) {
    resultado *= 2;
  }
  return resultado;
}

void binary_to_decimal(char str[]) {
  int n = strlen(str);
  int resultado = 0;
  int cont = 0;
  printf("Binário: %s\n", str);
  for (int i = n - 1; i >= 0; i--) {
    if (str[i] == '0') {
      printf("\ti: %d -  binario: %c | 2^%d | continue\n", i, str[i], cont);
      cont++;
      continue;
    }
    resultado += pow_two(cont);
    printf("\ti: %d -  binario: %c | 2^%d | resultado: %d\n", i, str[i], cont,
           resultado);
    cont++;
  }
}

int main() { binary_to_decimal("10011011"); }
