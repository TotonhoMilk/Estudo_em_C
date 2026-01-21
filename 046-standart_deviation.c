/* Desvio padrão da população.
 *
 * O desvio padrão mede a propagação de uma distribuição de dados.
 * Ele mede a distância típica entre cada ponto de dados e a média.
 *
 * Fórmula
 * sigma = sqrt(sum((xi - mi)^2) / N)
 *
 * Passo 1: Calcule a média dos dados – isso é ‍\[\mu\] na fórmula.
 *
 * Passo 2 : Subtraia a média de cada ponto de dados.
 * Essas diferenças são chamadas de desvios.
 * Os pontos de dados abaixo da média terão desvios negativos,
 * e os pontos de dados acima da média terão desvios positivos.
 *
 * Passo 3 : Quadre cada desvio para torná-lo positivo.
 *
 * Passo 4 : Adicione os desvios quadrados juntos.
 *
 * Passo 5 : Dividir a soma pelo número de pontos de dados na população.
 * O resultado é chamado de variância.
 *
 * Passo 6 : Pegue a raiz quadrada da variância para obter o desvio padrão.
 */
#include <math.h>
#include <stdio.h>

double stddeviation(double a[], int N) {
  double mi = 0;
  double sum = 0;
  for (int i = 0; i < N; i++) {
    mi += a[i];
  }
  mi = mi / N;
  printf("mi: %.2f\n", mi);
  for (int i = 0; i < N; i++) {
    sum += pow((a[i] - mi), 2);
  }
  printf("sum: %.2f\n", sum);
  return sqrt(sum / N);
}

int main() {
  double a[] = {6, 2, 3, 1};
  double r = stddeviation(a, 4);
  printf("Standart deviation: %.2f\n", r);
  return 0;
}
