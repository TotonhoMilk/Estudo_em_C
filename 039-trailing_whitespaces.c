// Tira caracteres no final da string.
// 17/1/2026

#include <stdio.h>
#include <string.h>

void trailing(char *s) {
  int count = strlen(s) - 1;
  while (s[count] == ' ' || s[count] == '\n' || s[count] == '\t')
    count--;
  s[count + 1] = '\0';
}

int main() {
  char s[] = "This is the way.  \n\n\t  ";
  printf("Antes:\n%s", s);
  trailing(s);
  printf("Depois:\n%s", s);
  return 0;
}
