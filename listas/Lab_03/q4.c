#include <stdio.h>
int numero_global = 2;
#include "q4.h"

int main() {
  int resp = impar_par();
  if (resp) {
    printf("%d é par.\n", resp);
  } else {
    printf("%d é ímpar.\n", resp);
  }
  printf("%d\n", resp);

  return 0;
}
