// Achar manualmente o valor o tamanho da string.
// 13/1/2026

#include <stdio.h>
#include <string.h>

int lenstr(char *str) {
  int count = 0;
  while (*(str + count) != '\0')
    count++;
  return count;
}

int main() {
  char *s1 = "This is the way.";
  int len1 = strlen(s1);
  printf("Tamanho da string (strlen): %d\n", len1);
  int len2 = lenstr(s1);
  printf("Tamanho da string (lenstr): %d\n", len2);
  return 0;
}
