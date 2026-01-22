// Conta o número de pontuações na string.
// 22/1/2026

#include <ctype.h>
#include <stdio.h>
#include <string.h>

int count_punc(char *s) {
  int len = strlen(s);
  int count = 0;
  for (int i = 0; i < len; i++)
    if (ispunct(s[i]))
      count++;
  return count;
}

int main() {
  char s[] = "apple, orange, fruits... Anything: grape;";
  int r = count_punc(s);
  printf("O número de pontuações é: %d\n", r);
  return 0;
}
