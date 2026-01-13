// Imprime o código fonte na tela.
// 13/1/2026

#include <stdio.h>

int main() {
  FILE *fp;
  char c;
  fp = fopen(__FILE__, "r");
  printf("======CÓDIGO FONTE======\n\n");
  while ((c = getc(fp)) != EOF)
    putchar(c);
  fclose(fp);
  printf("\n======CÓDIGO FONTE======\n");

  return 0;
}
