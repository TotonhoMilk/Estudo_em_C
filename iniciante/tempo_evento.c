#include <stdio.h>
#include <stdlib.h>

int main() {
  char dia_inicio[10];
  char dia_fim[10];
  char hora_inicio[15];
  char hora_fim[15];

  scanf("%[^\n]%*c", dia_inicio);
  scanf("%[^\n]%*c", hora_inicio);
  scanf("%[^\n]%*c", dia_fim);
  scanf("%[^\n]%*c", hora_fim);

  int d_inicio = 0;

  char temp[3];

  if (dia_inicio[5] == '\0') {
    temp[0] = dia_inicio[4];
    temp[1] = '\0';
    d_inicio = atoi(temp);
  } else {
    temp[0] = dia_inicio[4];
    temp[1] = dia_inicio[5];
    temp[2] = '\0';
    d_inicio = atoi(temp);
  }

  temp[0] = hora_inicio[0];
  temp[1] = hora_inicio[1];
  temp[2] = '\0';
  int h_inicio = atoi(temp);

  temp[0] = hora_inicio[5];
  temp[1] = hora_inicio[6];
  int m_inicio = atoi(temp);

  temp[0] = hora_inicio[10];
  temp[1] = hora_inicio[11];
  int s_inicio = atoi(temp);

  int d_fim = 0;
  if (dia_fim[5] == '\0') {
    temp[0] = dia_fim[4];
    temp[1] = '\0';
    d_fim = atoi(temp);
  } else {
    temp[0] = dia_fim[4];
    temp[1] = dia_fim[5];
    temp[2] = '\0';
    d_fim = atoi(temp);
  }

  temp[0] = hora_fim[0];
  temp[1] = hora_fim[1];
  temp[2] = '\0';
  int h_fim = atoi(temp);

  temp[0] = hora_fim[5];
  temp[1] = hora_fim[6];
  int m_fim = atoi(temp);

  temp[0] = hora_fim[10];
  temp[1] = hora_fim[11];
  int s_fim = atoi(temp);

  int q_dias = 0;
  int q_horas = 0;
  int q_min = 0;
  int q_seg = 0;

  q_dias = d_fim - d_inicio;

  if (h_fim < h_inicio) {
    q_dias -= 1;
    q_horas = (h_fim - h_inicio) + 24;
  } else {
    q_horas = h_fim - h_inicio;
  }

  if (m_fim < m_inicio) {
    q_horas -= 1;
    q_min = (m_fim - m_inicio) + 60;
  } else {
    q_min = m_fim - m_inicio;
  }

  if (s_fim < s_inicio) {
    q_min -= 1;
    q_seg = (s_fim - s_inicio) + 60;
  } else {
    q_seg = s_fim - s_inicio;
  }

  if (q_horas < 0) {
    q_dias -= 1;
    q_horas += 24;
  }

  printf("%d dia(s)\n", q_dias);
  printf("%d hora(s)\n", q_horas);
  printf("%d minuto(s)\n", q_min);
  printf("%d segundo(s)\n", q_seg);

  return 0;
}
