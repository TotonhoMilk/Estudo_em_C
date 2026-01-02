// Concatena duas strings.
// 25/12/2025

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *append_string(char *s1, char *s2) {
  int lenght_s1 = strlen(s1);
  int lenght_s2 = strlen(s2);
  int size = lenght_s1 + lenght_s2 + 1;
  char *p = calloc(size, sizeof(char));
  for (int i = 0; i < lenght_s1; i++) {
    p[i] = s1[i];
  }
  for (int i = 0; i < lenght_s2; i++) {
    p[lenght_s1 + i] = s2[i];
  }
  p[size - 1] = '\0';
  return p;
}

int main() {
  char str_1[] = "Primeira ";
  char str_2[] = "Segunda";
  char *pstr = append_string(str_1, str_2);
  printf("%s\n", pstr);
  free(pstr);
  return 0;
}
