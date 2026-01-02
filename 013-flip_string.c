// Inverte os caracteres de uma string.
// 25/12/2025

#include <ctype.h>
#include <stdio.h>
#include <string.h>

void flip_letter(char *str) {
  int lenght = strlen(str);
  for (int i = 0; i < lenght; i++) {
    if (isupper(str[i])) {
      str[i] = tolower(str[i]);
    } else if (islower(str[i])) {
      str[i] = toupper(str[i]);
    }
  }
}

int main() {
  char s[] = "abcdeABCDE";
  printf("String normal: %s\n", s);
  flip_letter(s);
  printf("String invertida: %s\n", s);
  return 0;
}
