// Confere se duas strings são anagramas.
// 22/1/2026

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool is_anagram(char *s1, char *s2) {
  int len1 = strlen(s1);
  int len2 = strlen(s2);
  int s1wc[26] = {0};
  int s2wc[26] = {0};
  for (int i = 0; i < len1; i++) {
    int lower = tolower(s1[i]);
    printf("s1: %c | lower: %d | lower - 'a': %d\n", s1[i], lower, lower - 'a');
    s1wc[lower - 'a']++;
  }
  printf("| s1 ==> ");
  for (int i = 0; i < 26; i++)
    printf("%d ", s1wc[i]);
  printf("\n");
  for (int i = 0; i < len2; i++) {
    int lower = tolower(s2[i]);
    printf("s2: %c | lower: %d | lower - 'a': %d\n", s2[i], lower, lower - 'a');
    s2wc[lower - 'a']++;
  }
  printf("| s2 ==> ");
  for (int i = 0; i < 26; i++)
    printf("%d ", s2wc[i]);
  printf("\n");
  for (int i = 0; i < 26; i++)
    if (s1wc[i] != s2wc[i])
      return false;
  return true;
}

int main() {
  char s1[] = "Listen";
  char s2[] = "Silent";
  if (is_anagram(s1, s2))
    printf("Anagram!\n");
  else
    printf("Not anagram!\n");
  return 0;
}
