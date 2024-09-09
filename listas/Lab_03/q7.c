#include <stdio.h>

#include "q7.h"

int main() {
  int n, termo;
  printf("Digite o valor de N: ");
  scanf("%d", &n);
  termo = fibonacci(n);
  printf("O %dº termo da sequência de Fibonacci é: %d\n", n, termo);
  return 0;
}
