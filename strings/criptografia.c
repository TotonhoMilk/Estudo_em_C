#include <ctype.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

void cripto(char *str) {
  int len = strlen(str);
  // Passo 1
  for (int i = 0; i < len; i++) {
    if (isalpha(str[i])) {
      str[i] += 3;
    }
  }
  // Passo 2
  char temp;
  for (int i = 0; i < len / 2; i++) {
    temp = str[i];
    str[i] = str[len - i - 1];
    str[len - i - 1] = temp;
  }
  // Passo 3
  for (int i = len / 2; i < len; i++) {
    str[i] -= 1;
  }
  // Impressão
  printf("%s\n", str);
}

int main() {
  unsigned int linhas;
  int caracteres = 1000;
  scanf("%d%*c", &linhas);
  char str[linhas][caracteres];
  // printf("alocados %lu bytes de memoria.\n", sizeof(str));
  for (int i = 0; i < linhas; i++) {
    // fgets(&str[i][0], caracteres, stdin);
    scanf("%9999[^\n]s%*c", &str[i][0]);
    getchar();
  }

  // printf("========================\n");
  // for (int i = 0; i < linhas; i++) {
  //   printf("%s\n", &str[i][0]);
  // }
  // printf("========================\n");
  for (int i = 0; i < linhas; i++) {
    cripto(&str[i][0]);
  }
  return 0;
}
