// Valida um tipo especial de string.
// 4/1/2025
//
// Formato válido
// V5V 2D5
// letra | número | letra | ESPAÇO | número | letra | número
//  0        1         2       3       4        5        6
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool is_valid(char str[]) {
  if (strlen(str) != 7)
    return false;
  if (!isalpha(str[0]))
    return false;
  if (!isdigit(str[1]))
    return false;
  if (!isalpha(str[2]))
    return false;
  if (str[3] != ' ')
    return false;
  if (!isdigit(str[4]))
    return false;
  if (!isalpha(str[5]))
    return false;
  if (!isdigit(str[6]))
    return false;
  return true;
}

int main() {
  char code[] = "X4X 9G5";
  if (is_valid(code)) {
    printf("%s é válido!\n", code);
  } else {
    printf("%s não é válido!\n", code);
  }
  return 0;
}
