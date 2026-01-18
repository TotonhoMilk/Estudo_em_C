// Conta o tamanho da maior palavra na string.
// 17/1/2026

#include <stdio.h>
#include <string.h>

int largest_word1(char *s) {
  int n = strlen(s);
  int count = 0;
  char nonwords[] = " .,;!?\n\t";
  int i = 0;
  int max = -1;
  while (i < n) {
    count = 0;
    while (i < n) {
      if (strchr(nonwords, s[i]) != NULL)
        break;
      i++;
      count++;
      printf("Count: %d\n", count);
    }
    if (count > max) {
      max = count;
      printf("max: %d\n", max);
    }
    while (i < n) {
      if (strchr(nonwords, s[i]) == NULL)
        break;
      i++;
    }
  }
  return max;
}

int largest_word2(char *s) {
  int n = strlen(s);
  int i = 0;
  int length = 0;
  int max = 0;
  char nonwords[] = " .,;!?\n\t";
  while (i < n) {
    if (strchr(nonwords, s[i]) == NULL) {
      length++;
    } else {
      if (length > max) {
        max = length;
      }
      length = 0;
    }
    i++;
  }
  if (length > max) {
    max = length;
  }
  return max;
}

int main() {
  char s[] = "This is, the way. Again... Alexandre";
  int r1 = largest_word1(s);
  printf("A maior palavra tem %d letras.\n", r1);
  int r2 = largest_word2(s);
  printf("A maior palavra tem %d letras.\n", r2);
  return 0;
}
