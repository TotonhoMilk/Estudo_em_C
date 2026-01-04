// Buffer infinito
// 4/1/2026

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int size = 2;
  int *buffer = malloc(sizeof(int) * size);
  int num_data = 0;
  int input = 0;

  printf("Size: %d\n", size);

  while (true) {
    if (num_data == size) {
      size *= 2;
      printf("Size: %d\n", size);
      buffer = realloc(buffer, sizeof(int) * size);
    }
    printf("Enter: (-1) to quit: ");
    scanf("%d", &input);
    if (input == -1) {
      break;
    } else {
      buffer[num_data] = input;
      num_data++;
    }
  }

  int total = 0;
  for (int i = 0; i < num_data; i++) {
    printf("buffer[%d] = %d\n", i, buffer[i]);
    total += buffer[i];
  }
  printf("Avarage: %d\n", total / num_data);
  free(buffer);

  return 0;
}
