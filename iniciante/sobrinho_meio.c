#include <stdio.h>

int main() {
  int num[3];
  scanf("%d %d %d", &num[0], &num[1], &num[2]);
  int meio = num[1];
  // printf("meio: %d\n", meio);
  if ((meio > num[0]) && (meio > num[2])) {
    printf("huguinho\n");
  }
  if ((meio > num[0]) && (meio < num[2])) {
    printf("zezinho\n");
  }
  if ((meio < num[0]) && (meio < num[2])) {
    printf("luisinho\n");
  }

  return 0;
}

/* Velho--> huguinho
 * Meio --> zezinho
 * Novo --> luisinho
 *
 *
 *
 *
 *
 *
 * */
