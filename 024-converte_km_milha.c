// Caluladora de milhas para quilômetros, e vice e versa
// 4/1/2026

#include <stdbool.h>
#include <stdio.h>

#define CONST 1.6093

float converte_km_m(float km) { return km / CONST; }

float converte_m_km(float m) { return m * CONST; }

int main() {
  int opcao = -1;
  int valor = 0;
  float resultado = 0;
  while (true) {
    printf("Escolha sua opção:\n");
    printf("1) Quilômetros para milhas\n");
    printf("2) Milhas para Quilômetros\n");
    printf("0) Sair\n--> ");
    scanf("%d", &opcao);
    if (opcao == 0) {
      break;
    } else {
      switch (opcao) {
      case 1:
        printf("Digite quilômetros: ");
        scanf("%d", &valor);
        resultado = converte_km_m(valor);
        printf("Resultado: %.3f m\n", resultado);
        break;
      case 2:
        printf("Digite milhas: ");
        scanf("%d", &valor);
        resultado = converte_m_km(valor);
        printf("Resultado: %.3f km\n", resultado);
        break;
      default:
        printf("Valor equivocado!\n");
        break;
      }
    }
    printf("\n\n\n");
  }
}
