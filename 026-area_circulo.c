#include <stdio.h>

#define PI 3.14159

float area(float raio) { return raio * raio * PI; }

int main() {
  float raio = 0;
  printf("Digite o raio do círculo --> ");
  scanf("%f", &raio);
  float resultado = area(raio);
  printf("Área do círculo de raio %.2f é %.2fua\n", raio, resultado);
  return 0;
}
