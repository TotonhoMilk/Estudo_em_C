// Conta o tamanho da menor palavra na string.
// 18/1/2026

#include <stdio.h>
#include <string.h>

int smallest_word(char *s) {
  int n = strlen(s);
  int length = 0;
  char nonwords[] = " .,;\n\t\0";
  int max = 0;
  int min = 10;
  for (int i = 0; i < n; i++) {
    if (strchr(nonwords, s[i]) == NULL)
      length++;
    else {
      if (length > 0 && length < min)
        min = length;
      length = 0;
      printf("\nmin: %d ", min);
    }
  }
  return min;
}

int main() {
  char s[] = "This is, the way. Again... Alexandre";
  int r2 = smallest_word(s);
  printf("\n%s\n", s);
  printf("A menor palavra tem %d letras.\n", r2);

  return 0;
}
