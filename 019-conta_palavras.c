// Conta a ocorrência de uma palavra em uma string.
// 26/12/2025

#include <stdio.h>
#include <string.h>

int count_words(char *string, char *word) {
  int slen = strlen(string);
  int wlen = strlen(word);
  int end = slen - wlen + 1;
  int count = 0;
  int find_word = 0;
  for (int i = 0; i < end; i++) {
    find_word = 1;
    for (int j = 0; j < wlen; j++) {
      if (word[j] != string[i + j]) {
        find_word = 0;
        break;
      }
    }
    if (find_word) {
      count++;
    }
  }
  return count;
}

int main() {
  char s[] = "eu sou muito coisado, eu, sou, eu sim.";
  char w[] = "eu";
  printf("%s\n", s);
  int res = count_words(s, w);
  printf("A palavra '%s' apareceu %d vezes.\n", w, res);
  return 0;
}
