// Inverte todas as palavras de uma string.
// 17/1/2026

#include <stdio.h>
#include <string.h>

void reverse_word(char *s) {
  int i = 0, j = 0;
  char temp[100];
  int len = strlen(s);
  for (i = 0; i < len; i++) {
    // printf("i: %d\n", i);
    for (j = 0; j < len; j++, i++) {
      // printf("j: %d | ", j);
      if (s[i] == ' ' || s[i] == '.') {
        // printf("\ni: %d | j: %d\n", i, j);
        break;
      }
      temp[j] = s[i];
      // printf("temp[%d] = s[%d] --> %c\n", j, i, temp[j]);
    }
    while (j > 0) {
      j--;
      s[i - j - 1] = temp[j];
      // printf("\ts[%d] = temp[%d] --> %c\n", i - j - 1, j, s[i - j - 1]);
    }
  }
}

int main() {
  char s[] = "This is the way.";
  printf("%s\n", s);
  reverse_word(s);
  printf("%s\n", s);
  return 0;
}
