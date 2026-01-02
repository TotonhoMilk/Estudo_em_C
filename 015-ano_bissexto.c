// Determina se um ano é bissexto.
// 25/12/2025

#include <stdio.h>

int leap_year(int year) {
  if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
    return 1;
  }
  return 0;
}

int main() {
  printf("Digite o ano\n--> ");
  int ano = 0;
  scanf("%d", &ano);
  if (leap_year(ano)) {
    printf("O ano de %d é bissexto.\n", ano);
  } else {
    printf("O ano de %d não é bissexto.\n", ano);
  }
  return 0;
}
