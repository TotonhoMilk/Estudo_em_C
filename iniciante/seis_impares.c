#include <stdio.h>

int main() {
  int num = 0;
  scanf("%d", &num);
  int cont = 0;
  int i = 0;
  while (cont < 6) {
    if ((num + i) % 2 != 0) {
      printf("%d\n", num + i);
      cont++;
    }
    i++;
  }
  return 0;
}
