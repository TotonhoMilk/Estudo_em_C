// Conta quantas vogais tem uma string
// 25/12/2025

#include <ctype.h>
#include <stdio.h>
#include <string.h>

int count_vowels(char *str) {
  int count = 0;
  char vowel;
  for (int i = 0; i < strlen(str); i++) {
    vowel = toupper(str[i]);
    switch (vowel) {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
      count++;
      printf("\tA letra '%c' é vogal.\n\t\tContador = %d\n", str[i], count);
    }
  }
  return count;
}

int main() {
  char test_str[] = "Ola! Tudo bem, por ai!";

  int resultado = count_vowels(test_str);
  printf("A string %s tem %d vogais.\n", test_str, resultado);
  return 0;
}
