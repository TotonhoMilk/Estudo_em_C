#include <stdio.h>

int main() {
  float salario;
  float novo_sal, reajuste;
  int percentual;
  scanf("%f%*c", &salario);
  if (salario <= 400.0) {
    percentual = 15;
  } else if (salario > 400.0 && salario <= 800.0) {
    percentual = 12;
  } else if (salario > 800.0 && salario <= 1200.0) {
    percentual = 10;
  } else if (salario > 1200.0 && salario <= 2000.0) {
    percentual = 7;
  } else {
    percentual = 4;
  }
  reajuste = salario * (percentual / 100.0);
  novo_sal = salario + reajuste;
  printf("Novo salario: %.2f\n", novo_sal);
  printf("Reajuste ganho: %.2f\n", reajuste);
  printf("Em percentual: %d %%\n", percentual);
}
