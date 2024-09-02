#include <stdio.h>
#include <stdlib.h> // Para a função abs

int main() {
  int a, b, maiorAB;

  // Exemplo de valores para a e b
  printf("Digite o valor de a: ");
  scanf("%d", &a);
  printf("Digite o valor de b: ");
  scanf("%d", &b);

  // Calculando o maior valor entre a e b
  maiorAB = (a + b + abs(a - b)) / 2;

  // Exibindo o resultado
  printf("O maior valor entre %d e %d é: %d\n", a, b, maiorAB);

  return 0;
}
