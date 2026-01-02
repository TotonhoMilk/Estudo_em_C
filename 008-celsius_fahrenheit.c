// Transforma temperatura em Celsius para fahrenheit.
// 23/12/2025

#include <stdio.h>

float celsius_fahrenheit(float temp_c) { return temp_c * 1.8 + 32; }

int main() {
  float temperatura = 0;
  printf("Digite a temperatura em °C\n--> ");
  scanf("%f", &temperatura);
  float fah = celsius_fahrenheit(temperatura);
  printf("| %2.2f°C | %3.2f°F |\n", temperatura, fah);
  return 0;
}
