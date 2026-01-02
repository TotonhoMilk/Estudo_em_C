// Acha a ocorrência de um caracter e substitui por outro
// 29/12/2025

#include <stdio.h>
#include <string.h>

void replace_caracter(char str[], char found, char replace) {
  int n = strlen(str);
  printf("String: %s\n", str);
  printf("Tamanho da string: %d\n", n);
  for (int i = 0; i < n; i++) {
    if (str[i] == found) {
      printf("str[%d]:%c --> %c\n", i, str[i], replace);
      str[i] = replace;
    }
  }
  printf("%s\n", str);
}

void replace_caracter_2(char str[], char found, char replace) {
  char *pstr;
  long i = 0;
  int n = strlen(str);
  printf("String: %s\n", str);
  printf("Tamanho da string: %d\n", n);
  pstr = strchr(str, found);
  while (pstr != NULL) {
    i = pstr - str;
    str[pstr - str] = replace;
    printf("Achado na posição %ld\n", i);
    pstr = strchr(pstr + 1, found);
  }
  printf("%s\n", str);
}

int main() {
  char texto[] = "this is a test!";
  replace_caracter(texto, 't', 'g');
  printf("\n\n--------------------------------\n\n");
  replace_caracter_2(texto, 'g', 't');
  return 0;
}
