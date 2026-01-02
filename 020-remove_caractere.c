/* Remove todos os caracteres iguais de uma string.
 * 28/12/2025
 *
 * b a n a n a
 * 0 1 2 3 4 5
 *
 * a
 *
 * j = 0
 * i = 0 --> b != a --> i - j --> b
 * i = 1 --> a == a --> j++(1)--> continue
 * i = 2 --> n != a --> i - j --> n
 * i = 3 --> a == a --> j++(2)--> continue
 * i = 4 --> n != a --> i - j --> n
 * i = 5 --> a == a --> j++(3)--> continue
 * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void remove_char(char *str, char c) {
  int j = 0;
  int len = strlen(str);
  printf("Remover a letra %c da palavra %s\n", c, str);
  printf("Tamanho da string: %d\n\n", len);
  char *pstr = malloc(sizeof(char) * len);
  for (int i = 0; i < len; i++) {
    printf("i = %d - Se %c == %c\n", i, str[i], c);
    if (str[i] == c) {
      j++;
      printf("\tVerdadeiro! Novo valor de j: %d\n\tContinue\n", j);
      continue;
    }
    pstr[i - j] = str[i];
    printf("\tpstr[%d - %d] = str[%d]: %c\n", i, j, i, pstr[i - j]);
  }
  printf("\n\tResultado: %s\n", pstr);
  free(pstr);
}

int main() {
  char s[] = "banana";
  char c = 'a';
  remove_char(s, c);
}
