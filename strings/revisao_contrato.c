#include <stdio.h>
#include <string.h>

int main() {
  while (1) {
    char D;
    char N[102];
    char R[102];

    scanf("%c %s%*c", &D, N);

    if (D == '0' && N[0] == '0' && N[1] == '\0')
      break;

    int len = strlen(N);
    int cont = 0;

    for (int i = 0; i < len; i++) {
      if (D == '0') {
        while (N[i] == D) {
          i++;
        }
        D = 'Y';
      }
      if (N[i] != D) {
        R[cont] = N[i];
        cont++;
      }
    }

    R[cont] = '\0';

    if (R[0] == '0' && R[1] == '0')
      printf("0\n");
    else if (R[0] == '\0')
      printf("0\n");
    else
      printf("%s\n", R);
  }
  return 0;
}
