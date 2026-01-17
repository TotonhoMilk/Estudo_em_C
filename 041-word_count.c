// Conta quantas palavras tem na string.
// 17/1/2026

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int word_count1(char *s) {
  int n = strlen(s);
  int count = 0;
  char nonwords[] = " .,;!?\n\t";
  for (int i = 0; i < n; i++) {
    while (i < n) {
      if (strchr(nonwords, s[i]) != NULL)
        break;
      i++;
    }
    count++;
    while (i < n) {
      if (strchr(nonwords, s[i]) == NULL)
        break;
      i++;
    }
  }
  return count;
}

int word_count2(char *s) {
  int n = strlen(s);
  int count = 0;
  bool in_word = false;
  char nonwords[] = " .,;!?\n\t";
  for (int i = 0; i < n; i++) {
    if (strchr(nonwords, s[i]) == NULL) {
      if (in_word == false) {
        count++;
        in_word = true;
      }
    } else
      in_word = false;
  }
  return count;
}

int main() {
  char s[] = "This is, the way.   Another...";
  int r1 = word_count1(s);
  printf("Total de %d palavras\n", r1);
  int r2 = word_count2(s);
  printf("Total de %d palavras\n", r2);
  return 0;
}
