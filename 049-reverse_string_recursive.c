// Imprime a string em ordem reversa usando recursão.
// 22/1/2026

#include <stdio.h>

void print_reverse(char *s) {
  if (*s == '\0')
    return;
  else {
    print_reverse(s + 1);
    printf("%c", *s);
  }
}

int main() {
  char s[] = "This is the way.";
  print_reverse(s);
  printf("\n");
  return 0;
}
