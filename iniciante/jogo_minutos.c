#include <stdio.h>

int main() {
  int h_inicio, m_inicio, h_fim, m_fim;
  int min, hora;
  hora = 0;
  scanf("%d %d %d %d%*c", &h_inicio, &m_inicio, &h_fim, &m_fim);
  if (m_fim < m_inicio) {
    m_fim += 60;
    h_fim -= 1;
  }
  if (h_inicio == h_fim && m_inicio == m_fim) {
    printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    return 0;
  }
  min = m_fim - m_inicio;
  // hora = h_fim - h_inicio;
  // while (h_inicio != h_fim) {
  //   h_inicio++;
  //   hora++;
  //   if (h_inicio == 24) {
  //     h_inicio = 0;
  //   }
  // }
  if (h_fim < h_inicio) {
    h_fim += 24;
  }
  hora = h_fim - h_inicio;

  printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hora, min);
  return 0;
}
