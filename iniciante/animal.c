#include <stdio.h>
#include <string.h>

int main() {
  char palavra_1[50], palavra_2[50], palavra_3[50];
  scanf("%s%*c", palavra_1);
  scanf("%s%*c", palavra_2);
  scanf("%s%*c", palavra_3);

  if (!strcmp(palavra_1, "vertebrado")) {
    if (!strcmp(palavra_2, "ave")) {
      if (!strcmp(palavra_3, "carnivoro")) {
        printf("aguia\n");
      }
      if (!strcmp(palavra_3, "onivoro")) {
        printf("pomba\n");
      }
    }
    if (!strcmp(palavra_2, "mamifero")) {
      if (!strcmp(palavra_3, "onivoro")) {
        printf("homem\n");
      }
      if (!strcmp(palavra_3, "herbivoro")) {
        printf("vaca\n");
      }
    }
  }
  if (!strcmp(palavra_1, "invertebrado")) {
    if (!strcmp(palavra_2, "inseto")) {
      if (!strcmp(palavra_3, "hematofago")) {
        printf("pulga\n");
      }
      if (!strcmp(palavra_3, "herbivoro")) {
        printf("lagarta\n");
      }
    }
    if (!strcmp(palavra_2, "anelideo")) {
      if (!strcmp(palavra_3, "hematofago")) {
        printf("sanguessuga\n");
      }
      if (!strcmp(palavra_3, "onivoro")) {
        printf("minhoca\n");
      }
    }
  }

  return 0;
}
