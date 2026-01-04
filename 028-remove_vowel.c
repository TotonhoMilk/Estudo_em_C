// Remove vogal de uma palavra.
// 4/1/2026

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool is_vowel(char letra) {
  switch (tolower(letra)) {
  case 'a':
  case 'e':
  case 'i':
  case 'o':
  case 'u':
    return true;
    break;
  }
  return false;
}

int main() {
  char texto[50];
  printf("Digite uma palavra -> ");
  scanf("%49[^\n]%*c", texto);
  int len = strlen(texto);
  printf("Tamanho da palavra: %d letras\n", len);
  char res[len];
  int cont = 0;
  for (int i = 0; i < len; i++) {
    if (is_vowel(texto[i])) {
      continue;
    }
    res[cont] = texto[i];
    cont++;
  }
  res[cont] = '\0';
  printf("Novo tamanho da palavra: %d letras\n", cont);
  printf("Palavra '%s' sem vogais é '%s'\n", texto, res);
  return 0;
}
