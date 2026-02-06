#include <stdio.h>

int main() {
  float salario;
  float irrf = 0;
  scanf("%f", &salario);
  if (salario <= 2000.0) {
    printf("Isento\n");
  } else if (salario <= 3000.0) {
    irrf = (salario - 2000.0) * 0.08;
    printf("R$ %.2f\n", irrf);
  } else if (salario <= 4500) {
    irrf = ((salario - 3000.0) * 0.18) + 80;
    printf("R$ %.2f\n", irrf);
  } else {
    irrf = ((salario - 4500) * 0.28) + 350;
    printf("R$ %.2f\n", irrf);
  }
  return 0;
}
