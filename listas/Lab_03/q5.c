#include <stdio.h>
#include "q5.h"

int main() {
 int x, y;
 printf("Digite o valor de x: ");
 scanf("%d", &x);
 printf("Digite o valor de y: ");
 scanf("%d", &y);
 printf("Soma: %d\n", somar(x, y));
 printf("Subtração: %d\n", subtrair(x, y));
 printf("Multiplicação: %d\n", multiplicar(x, y));
 printf("Divisão: %.2f\n", dividir(x, y)); // Imprimindo com 2 casas decimais
 return 0;
}
