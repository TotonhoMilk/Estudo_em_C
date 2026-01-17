// Tira caracteres no início da string.
// 17/1/2026

#include <stdio.h>

void trim(char *s) {
  int count = 0;
  while (s[count] == ' ' || s[count] == '\n' || s[count] == '\t')
    count++;
  int i = 0;
  while (s[i] != '\0') {
    s[i] = s[i + count];
    i++;
  }
  s[i] = '\0';
}

int main() {
  char s[] = "   \n\n\t   This is the way.\n";
  printf("Antes:\n%s", s);
  trim(s);
  printf("Depois:\n%s", s);
  return 0;
}
