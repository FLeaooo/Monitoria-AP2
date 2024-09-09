#include <stdio.h>

#include "q6.h"

int main() {
  int hora;
  printf("Digite a hora (no formato 24h): ");
  scanf("%d", &hora);
  saudacao(hora);
  return 0;
}
