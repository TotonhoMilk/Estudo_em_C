#include <stdio.h>

void bubbleSort(float array[], int size) {
  for (int step = 0; step < size - 1; ++step) {
    for (int i = 0; i < size - step - 1; ++i) {
      if (array[i] < array[i + 1]) {
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}

int main() {
  float n[3];
  float A, B, C;

  scanf("%f %f %f", &n[0], &n[1], &n[2]);
  // printf("%.1f %.1f %.1f\n", n[0], n[1], n[2]);

  bubbleSort(n, 3);

  // printf("%.1f %.1f %.1f\n", n[0], n[1], n[2]);

  A = n[0];
  B = n[1];
  C = n[2];

  if (A >= (B + C)) {
    printf("NAO FORMA TRIANGULO\n");
    return 0;
  }
  if ((A * A) == ((B * B) + (C * C))) {
    printf("TRIANGULO RETANGULO\n");
  }
  if ((A * A) > ((B * B) + (C * C))) {
    printf("TRIANGULO OBTUSANGULO\n");
  }
  if ((A * A) < ((B * B) + (C * C))) {
    printf("TRIANGULO ACUTANGULO\n");
  }
  if ((A == B) && (A == C)) {
    printf("TRIANGULO EQUILATERO\n");
  }
  if ((A == B && A != C) || (A == C && A != B) || (B == C && B != A)) {
    printf("TRIANGULO ISOSCELES\n");
  }

  return 0;
}
