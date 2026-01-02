// Verifica se a string é um palíndromo.
// 23/12/2025

#include <stdio.h>
#include <string.h>

int check_palindrome(char *pstr) {
  int n = strlen(pstr);
  printf("O tamanho da string %s é : %d\n", pstr, n);

  for (int i = 0; i < n / 2; i++) {
    printf("pstr[%d] = %c <==> pstr[%d] = %c\n", i, pstr[i], n - i - 1,
           pstr[n - i - 1]);
    if (pstr[i] != pstr[n - i - 1]) {
      printf("\tFalso!\n\tpstr[%d] = %c <!=> pstr[%d] = %c\n", i, pstr[i],
             n - i - 1, pstr[n - i - 1]);
      return 0;
    }
  }
  return 1;
}

int main() {
  char str_1[50];
  printf("Digite a palavra:\n--> ");
  scanf("%49s%*c", str_1);
  if (check_palindrome(str_1)) {
    printf("A palavra %s é palindromo.\n", str_1);
  } else {
    printf("A palavra %s não é palindromo.\n", str_1);
  }
  return 0;
}
